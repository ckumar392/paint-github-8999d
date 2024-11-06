//  Copyright © 2020 Chandan Kumar. All rights reserved.
//

import SwiftUI

struct Ring: View {
    @Binding var to: CGFloat
    
    var body: some View {
    ZStack {
        Circle()
            .trim(from: 0, to: 1)
            .stroke(Color("darkBlue").opacity(0.3),
                    style: StrokeStyle(lineWidth: 19, lineCap: .round))
            .frame(width: 135, height: 135)
            .rotationEffect(.init(degrees: -90))
        
        Circle()
            .trim(from: 0, to: to)
            .stroke(AngularGradient(gradient: Gradient(colors: [Color("darkBlue"), Color("blue")]), center: .center, startAngle: .zero, endAngle: .degrees(360)),
                    style: StrokeStyle(lineWidth: 19, lineCap: .round))
            .frame(width: 135, height: 135)
            .rotationEffect(.init(degrees: -90))
        
        if self.to != 0 {
            Circle()
                .frame(width: 19, height: 19)
                .foregroundColor(Color("darkBlue"))
                .offset(y: -67.5)
        }
        Circle()
            .frame(width: 19, height: 19)
            .foregroundColor(to > 0.95 ? Color("blue") : Color("blue").opacity(0))
            .offset(y: -67.5)
            .rotationEffect(Angle.degrees(360 * Double(to)))
        }
    }
}
