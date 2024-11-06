//
//  ContentView.swift
//  Money Heist
//
//  Created by Workspace 1 on 24/12/21.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        ScrollView{
            
            Image("team1").resizable().scaledToFit()
            Text("MONEY HEIST").font(.largeTitle).fontWeight(.heavy).foregroundColor(Color.red)
            
            Text("All over the world, politicians and industry leaders repeat the old democracy mantra \" Power to the people\".").padding().foregroundColor(.secondary)
            
            Text("The money heist coin is inspired by the true spirit of the Money heist film series. It stands for courage, freedom against limiting forces, and living in grand style. But more importantly, the money heist coin is focused on making crypto technology and its earning opportunities available to everyone. Also, it is focused on allowing people create larger than life experiences on the internet and also preserving wealth for generations.").foregroundColor(.secondary).padding()
            
            Text("One of the things that got me really hooked on the show is it’s enigmatic array of characters, each with their own motivations and monikers based off famous cities around the world, with which they identify as. Each of these characters plays an important role and adds a certain je ne sais quoi that makes the entire cast function so well together; solidifying the dysfunctional family dynamic they share. From the hot-headed Denver, to the gentle giant, Helsinki, to the high-spirited and sexy Nairobi, to the eccentric and narcissistic Arturo Román. These individual characters as they’re portrayed by their brilliant cast of actors, do a great job of selling you on their idiosyncrasies and motivations.").padding().foregroundColor(.secondary)
            
            Image("team2").resizable().scaledToFit()
            Text("Let's dive into the world of heist and get famliar with the main characters!").padding(.top).foregroundColor(.red)
            
            HStack{
                Image("tokyo1").resizable().scaledToFit()
               Image("berlin").resizable().scaledToFit()
                }
            HStack{
                Image("rio").resizable().scaledToFit()
                Image("helsinki").resizable().scaledToFit()
            }
            HStack
            {
                Image("professor2").resizable().scaledToFit()
                
                Image("alison").resizable().scaledToFit()
            }
        }.navigationBarTitle("La Casa De Papel")
            
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        NavigationView
        {
            ContentView().preferredColorScheme(.dark)

        }
    }
} 
