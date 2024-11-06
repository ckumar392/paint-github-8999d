//
//  tirangaFlag.swift
//  Doodly
//
//  Created by Chandan Kumar on 20/03/23.
//

import SwiftUI

struct tirangaFlag: View {
    @State var scale = 3.0
    @State private var isRotating = 0.0
    var body: some View {
        var count = 0
        VStack() {
            Rectangle()
            .cornerRadius(50)
            .foregroundColor(.orange)
                .frame(width: 200, height: 200)
                .scaleEffect(scale)
                .onAppear {
                    let baseAnimation = Animation.easeInOut(duration: 2)
                    let repeated = baseAnimation.repeatForever(autoreverses: true)

                    withAnimation(repeated) {
                        scale = 0.5
                    }
                }
            ZStack{
                
                Rectangle()
                .cornerRadius(50)
                .foregroundColor(.white)
                    .frame(width: 200, height: 200)
                    .scaleEffect(scale)
                    .onAppear {
                        let baseAnimation = Animation.easeInOut(duration: 1)
                        let repeated = baseAnimation.repeatForever(autoreverses: true)

                        withAnimation(repeated) {
                            scale = 0.5
                        }
                    }
                //
                
                Circle()
                    .stroke(Color.blue, lineWidth: 10)
                    .font(.system(size: 4))
                    .rotationEffect(.degrees(isRotating))
                    .onAppear {
                        withAnimation(.linear(duration: 1)
                                .speed(1).repeatForever(autoreverses: false)) {
                            isRotating = 360.0
                        }
                    }
                    .scaleEffect(scale)
                    .onAppear {
                        let baseAnimation = Animation.easeInOut(duration: 1)
                        let repeated = baseAnimation.repeatForever(autoreverses: true)

                        withAnimation(repeated) {
                            scale = 0.5
                        }
                    }
                
                
                Image(systemName: "pencil")
                    .foregroundColor(.blue)
                           .font(.system(size: 164))
                           .rotationEffect(.degrees(isRotating))
                           .onAppear {
                               withAnimation(.linear(duration: 1)
                                       .speed(8).repeatForever(autoreverses: false)) {
                                   isRotating = 360.0
                               }
                           }
                           .scaleEffect(scale)
                           .onAppear {
                               let baseAnimation = Animation.easeInOut(duration: 1)
                               let repeated = baseAnimation.repeatForever(autoreverses: true)

                               withAnimation(repeated) {
                                   scale = 0.5
                               }
                           }
            }
            Rectangle()
            .cornerRadius(50)
            .foregroundColor(.green)
                .frame(width: 200, height: 200)
                .scaleEffect(scale)
                .onAppear {
                    let baseAnimation = Animation.easeInOut(duration: 1)
                    let repeated = baseAnimation.repeatForever(autoreverses: true)

                    withAnimation(repeated) {
                        scale = 0.5
                    }
                }
            
        }
    }
}

struct tirangaFlag_Previews: PreviewProvider {
    static var previews: some View {
        tirangaFlag()
    }
}
