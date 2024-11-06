//
//  diskPulse.swift
//  Doodly
//
//  Created by Chandan Kumar on 19/03/23.
//

import SwiftUI

struct diskPulse: View {
    @State var scale = 1.0
    var body: some View {
        
            Capsule()
            //.cornerRadius(50)
            .foregroundColor(.red)
                .frame(width: 200, height: 200)
                .scaleEffect(scale)
                .onAppear {
                    let baseAnimation = Animation.easeInOut(duration: 1)
                    let repeated = baseAnimation.repeatForever(autoreverses: true)

                    withAnimation(repeated) {
                        scale = 0.25
                    }
                }
        
        
            
        }
}

struct diskPulse_Previews: PreviewProvider {
    static var previews: some View {
        diskPulse()
    }
}
