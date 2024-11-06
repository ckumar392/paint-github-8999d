
//  Copyright © 2020 Chandan Kumar.All rights reserved.
//

import SwiftUI

struct TextStyle: ViewModifier {
    let fontSize: CGFloat
    let fontWeight: Font.Weight
    let color: Color
    
    func body(content: Content) -> some View {
        content
            .font(.system(size: fontSize, weight: fontWeight, design: .rounded))
            .lineLimit(1)
            .allowsTightening(true)
            .minimumScaleFactor(0.5)
            .foregroundColor(color)
    }
}

struct RoundButtonStyle: ButtonStyle {
    @State var size: CGFloat
    
    func makeBody(configuration: Self.Configuration) -> some View {
        configuration.label
            .background(LinearGradient(gradient: Gradient(colors: [Color("blue"), Color("darkBlue")]), startPoint: .top, endPoint: .bottom)
                .frame(width: size, height: size).cornerRadius(size / 2))
            .frame(width: size, height: size)
            .cornerRadius(size / 2)
    }
}
