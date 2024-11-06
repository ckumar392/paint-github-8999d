//
//  ContentView.swift
//  Tokyo
//
//  Created by Workspace 1 on 24/12/21.
//
import SwiftUI

struct ContentView: View {
    @State private var अलर्ट : Bool = false
    var body: some View {
        ScrollView{
            Image("tokyo4").resizable().scaledToFit()
            Text("TOKYO").font(.title).bold().padding().foregroundColor(.red)
            Text("Does this come to your mind when you hear \"TOKYO\"?")
                .foregroundColor(.red).padding()
            Text("Tokyo, Japan’s busy capital, mixes the ultramodern and the traditional, from neon-lit skyscrapers to historic temples. The opulent Meiji Shinto Shrine is known for its towering gate and surrounding woods. The Imperial Palace sits amid large public gardens. The city's many museums offer exhibits ranging from classical art (in the Tokyo National Museum) to a reconstructed kabuki theater (in the Edo-Tokyo Museum). ")
                .foregroundColor(.secondary).padding()
            Text("Then there comes our favouriate \"Tokyo.Want to know w ho is she?? stay with us then.!!").foregroundColor(.red).bold().padding()
            Image("tokyo3").resizable().scaledToFit()
            Text("Tokyo (Silene Oliveira) is a fictional character in the Netflix series Money Heist, portrayed by Úrsula Corberó.The de facto protagonist of the series, she is the unreliable narrator and a runaway robber who is scouted by the Professor to participate in his heists.").foregroundColor(.white).padding()
            Text("Tokyo has brown hair and brown eyes Most of the time, her hair is rather unkempt and of medium length, with the only part seemingly getting shaven or cut being her bangs, which are cut in a straight way as not to cover her eyes, and nothing more. On some occasions, she is seen with a different haircut, such as a bun.").foregroundColor(.secondary).padding()
            
            Image("tokyo1").resizable().scaledToFit()
            
            
            Button(action: {
              print("Hello, but you are not gonna see this unless your eyes are on console!")
              self.अलर्ट  = true
            }) {
              Text("Do you like her?").bold()
                    .kerning(2.0)
                    .multilineTextAlignment(.center)
                    .lineSpacing(4.0)
                    .font(.footnote)
            }
            .alert(isPresented: $अलर्ट , content: {
                return Alert(title: Text("ALERT!").foregroundColor(.red), message: Text("बोहोत अच्छा, हमें भी टोक्यो पसंद है!! ").foregroundColor(.cyan), dismissButton: .default(Text("टोक्यो की जय हो! ")))
            })
            
        }.navigationTitle("वी लव TOKYO ").navigationTitle("okay")
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView().preferredColorScheme(.dark)
    }
}
