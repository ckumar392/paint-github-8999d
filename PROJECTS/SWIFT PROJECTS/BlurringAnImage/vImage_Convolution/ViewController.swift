/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Implementation of iOS view controller that demonstrates convolution.
*/

import UIKit
import Accelerate

let kernelLength = 51

class ViewController: UIViewController {

    let machToSeconds: Double = {
        var timebase: mach_timebase_info_data_t = mach_timebase_info_data_t()
        mach_timebase_info(&timebase)
        return Double(timebase.numer) / Double(timebase.denom) * 1e-9
    }()
    
    @IBOutlet var imageView: UIImageView!
    @IBOutlet weak var toolbar: UIToolbar!
    
    var mode = ConvolutionModes.hann1D {
        didSet {
            applyBlur()
        }
    }

    enum ConvolutionModes: String, CaseIterable {
        case hann1D
        case hann2D
        case box
        case tent
        case multi
    }
    
    var destinationBuffer = vImage_Buffer()
    
    let cgImage: CGImage = {
        guard let image = UIImage(named: "Landscape_4-2") else {
            fatalError("Unable to get image")
        }
        
        guard let cgImage = image.cgImage else {
            fatalError("Unable to get CGImage")
        }
        
        return cgImage
    }()
    
    lazy var format: vImage_CGImageFormat = {
        guard
            let format = vImage_CGImageFormat(cgImage: cgImage) else {
                fatalError("Unable to get color space")
        }
        
        return format
    }()
    
    lazy var sourceBuffer: vImage_Buffer = {
        guard
            var sourceImageBuffer = try? vImage_Buffer(cgImage: cgImage),
            
            var scaledBuffer = try? vImage_Buffer(width: Int(sourceImageBuffer.width / 4),
                                                  height: Int(sourceImageBuffer.height / 4),
                                                  bitsPerPixel: format.bitsPerPixel) else {
                                                    fatalError("Can't create source buffer.")
        }
        
        vImageScale_ARGB8888(&sourceImageBuffer,
                             &scaledBuffer,
                             nil,
                             vImage_Flags(kvImageNoFlags))
        
        return scaledBuffer
    }()
    
    let hannWindow: [Float] = {
        return vDSP.window(ofType: Float.self,
                           usingSequence: .hanningDenormalized,
                           count: kernelLength ,
                           isHalfWindow: false)
    }()
    
    lazy var kernel1D: [Float] = {
        var multiplier = 1 / vDSP.sum(hannWindow)

        return vDSP.multiply(multiplier, hannWindow)
    }()
    
    lazy var kernel2D: [Int16] = {
        let stride = vDSP_Stride(1)
        
        let intHann = vDSP.floatingPointToInteger(vDSP.multiply(pow(Float(Int16.max), 0.25), hannWindow),
                                                  integerType: Int16.self,
                                                  rounding: vDSP.RoundingMode.towardNearestInteger)
        
        var hannWindow2D = [Float](repeating: 0,
                                   count: kernelLength * kernelLength)
        
        cblas_sger(CblasRowMajor,
                   Int32(kernelLength), Int32(kernelLength),
                   1, intHann.map { return Float($0) },
                   1, intHann.map { return Float($0) },
                   1,
                   &hannWindow2D,
                   Int32(kernelLength))
        
        return vDSP.floatingPointToInteger(hannWindow2D,
                                           integerType: Int16.self,
                                           rounding: vDSP.RoundingMode.towardNearestInteger)
    }()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.navigationItem.rightBarButtonItem = modesBarButtonItem
        
        applyBlur()
    }
    
    func menuHandler(action: UIAction) {
        let title = action.title
        if let newMode = ConvolutionModes(rawValue: title) {
            mode = newMode
            
            // Rebuild the menu for this bar button item to reflect the newly chosen mode.
            self.navigationItem.rightBarButtonItem = modesBarButtonItem
        }
    }
    
    var menuItems: [UIAction] {
        get {
            return [
                UIAction(title: ConvolutionModes.hann1D.rawValue, state: mode == ConvolutionModes.hann1D ? .on : .off, handler: menuHandler),
                UIAction(title: ConvolutionModes.hann2D.rawValue, state: mode == ConvolutionModes.hann2D ? .on : .off, handler: menuHandler),
                UIAction(title: ConvolutionModes.box.rawValue, state: mode == ConvolutionModes.box ? .on : .off, handler: menuHandler),
                UIAction(title: ConvolutionModes.tent.rawValue, state: mode == ConvolutionModes.tent ? .on : .off, handler: menuHandler),
                UIAction(title: ConvolutionModes.multi.rawValue, state: mode == ConvolutionModes.multi ? .on : .off, handler: menuHandler)
            ]
        }
    }
    
    var modesBarButtonItem: UIBarButtonItem {
        get {
            return UIBarButtonItem(image: UIImage(systemName: "ellipsis.circle"), menu: UIMenu(title: "", children: menuItems))
        }
    }
    
    func applyBlur() {
        do {
            destinationBuffer = try vImage_Buffer(width: Int(sourceBuffer.width),
                                                  height: Int(sourceBuffer.height),
                                                  bitsPerPixel: format.bitsPerPixel)
        } catch {
            return
        }
        
        switch mode {
        case .hann1D:
            hann1D()
        case .hann2D:
            hann2D()
        case .tent:
            tent()
        case .box:
            box()
        case.multi:
            multi()
        }
        
        if let result = try? destinationBuffer.createCGImage(format: format) {
            imageView.image = UIImage(cgImage: result)
        }
        
        destinationBuffer.free()
    }
}
