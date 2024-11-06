//
//  WorldMap.swift
//  Money Heist
//
//  Created by Workspace 1 on 25/12/21.
//

import SwiftUI

struct WorldMap: View {
    var body: some View {
        
        VStack{
            Text("I want you all to meet world's Biggest Jafffa").padding().foregroundColor(.blue)
            Text("Fuck You Raghu!!").bold().font(.largeTitle).padding().foregroundColor(.red)
        }
        
    }
}

struct WorldMap_Previews: PreviewProvider {
    static var previews: some View {
        WorldMap().preferredColorScheme(.dark)
    }
}
