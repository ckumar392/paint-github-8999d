//
//  stopAnimations.swift
//  Doodly
//
//  Created by Chandan Kumar on 20/03/23.
//

import SwiftUI

struct stopAnimations: View {
    var body: some View {
        VStack{
            ZStack{
                Text("hello there i am chandan")
                    .frame(width: 40,height: 40)
                    .foregroundColor(.red)
                    .background(.mint)
                
            }
            
        }
    }
}

struct stopAnimations_Previews: PreviewProvider {
    static var previews: some View {
        stopAnimations()
    }
}
