//
//  ColorExtension.swift
//  color_slider
//
//  Created by Chandan Kumar on 27/04/22.
//

import Foundation
import SwiftUI

extension Color {
  /// Create a Color view from an RGB object.
  ///   - parameters:
  ///     - rgb: The RGB object.
  init(rgbStruct rgb: RGB) {
    self.init(red: rgb.red, green: rgb.green, blue: rgb.blue)
  }
}
