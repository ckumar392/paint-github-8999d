//
//  ContentView.swift
//  Gradiant
//
//  Created by Workspace 1 on 20/10/21.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        
    
        if #available(iOS 15.0, *){
           AngularGradient(gradient: Gradient(colors: [.blue,.green,.yellow,.green,.purple,.red,.purple,.blue,.red,.purple,.indigo]), center: .center)
            Text("Hello there how you doing!! ")
            Text("I am here with you and in am not at all doing this for!!").hoverEffect(/*@START_MENU_TOKEN@*/.lift/*@END_MENU_TOKEN@*/)
            Text("GoodBye World !!").bold().foregroundColor(.mint).font(.largeTitle)
            LinearGradient(gradient: Gradient(colors: [.white,.pink]), startPoint: .top, endPoint: .bottom)
                .edgesIgnoringSafeArea(/*@START_MENU_TOKEN@*/.all/*@END_MENU_TOKEN@*/)
                .hoverEffect(/*@START_MENU_TOKEN@*/.lift/*@END_MENU_TOKEN@*/)
                
            LinearGradient(gradient: Gradient(colors: [.white,.red]), startPoint: .top, endPoint: .bottom)
            LinearGradient(gradient: Gradient(colors: [.white,.blue]), startPoint: .top, endPoint: .bottom)
            RadialGradient(gradient: Gradient(colors: [.mint,.black]), center: .center, startRadius: 90, endRadius: 200)
        } else {
            // Fallback on earlier versions
        }
        
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
            .blur(radius: 0)
            .cornerRadius(0)
        
    }
}
