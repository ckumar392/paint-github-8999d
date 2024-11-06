//
//  ContentView.swift
//  Contact ME
//
//  Created by Workspace 1 on 06/11/21.
//

import SwiftUI

struct ContentView: View {
//.frame(width: 200, height: 50)
    var body: some View {
     
        VStack{
            HStack{
                Text("Contact Me!").font(.system(size: 36.0)).frame(width: 290, height: 50).foregroundColor(.white).background(.black).cornerRadius(12)
                Image(systemName: "paperplane.fill").foregroundColor(.black)
                    .font(.title)
            }
            Form{

                Link(destination: URL(string: "https://www.simpleswiftguide.com")!) {
                    VStack {
                        Image(uiImage: UIImage(named: "twitter")!).resizable().scaledToFit().frame(width: 150, height: 80, alignment: .center)
                        Text("Twitter").foregroundColor(.indigo)
                    }
                }
                Link(destination: URL(string: "https://www.simpleswiftguide.com")!) {
                    VStack {
                        Image(uiImage: UIImage(named: "linkedin")!).resizable().scaledToFit().frame(width: 150, height: 80, alignment: .center)
                        Text("LinkedIn").foregroundColor(.indigo)
                    }
                }
                Link(destination: URL(string: "https://www.simpleswiftguide.com")!) {
                    VStack {
                        Image(uiImage: UIImage(named: "github")!).resizable().scaledToFit().frame(width: 150, height: 80, alignment: .center)
                        Text("GitHub").foregroundColor(.indigo)
                    }
                }
                Link(destination: URL(string: "https://www.simpleswiftguide.com")!) {
                    VStack {
                        Image(uiImage: UIImage(named: "instagram")!).resizable().scaledToFit().frame(width: 150, height: 80, alignment: .center)
                        Text("Instagram").foregroundColor(.indigo)
                    }
                }
                Link(destination: URL(string: "https://www.simpleswiftguide.com")!) {
                    VStack {
                        Image(uiImage: UIImage(named: "fb")!).resizable().scaledToFit().frame(width: 150, height: 80, alignment: .center)
                        Text("Facebook").foregroundColor(.indigo)
                    }
                }

                Link(destination: URL(string: "https://www.simpleswiftguide.com")!) {
                    VStack {
                        Image(uiImage: UIImage(named: "twitch")!).resizable().scaledToFit().frame(width: 150, height: 80, alignment: .center)
                        Text("Twitch").foregroundColor(.indigo)
                    }
                }
            }
            
        }
       
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView().preferredColorScheme(.light)

    }
}
