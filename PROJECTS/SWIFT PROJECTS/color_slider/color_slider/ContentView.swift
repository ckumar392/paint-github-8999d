//
//  color_sliderApp.swift
//  color_slider
//
// In this project we will learn about the state identifiers and all their functionalities 
//  Created by Chandan Kumar on 26/04/22.
//
import SwiftUI
struct ContentView: View {

  @State var game = Game()
  @State var guess: RGB
  @State var showScore = false

  var body: some View {
    VStack {
      Circle()
        .fill(Color(rgbStruct: game.target))
      if !showScore {
        Text("R: ??? G: ??? B: ???")
          .padding()
      } else {
        Text(game.target.intString())
          .padding()
      }
      Circle()
        .fill(Color(rgbStruct: guess))
      Text(guess.intString())
        .padding()
      ColorSlider(value: $guess.red, trackColor: .red)
      ColorSlider(value: $guess.green, trackColor: .green)
      ColorSlider(value: $guess.blue, trackColor: .blue)
      Button("Hit Me!") {
        showScore = true
       // game.check(guess: guess)
      }
      .alert(isPresented: $showScore) {
        Alert(
          title: Text("Your Score"),
          message: Text(String(game.scoreRound)),
          dismissButton: .default(Text("OK")) {
            game.startNewRound()
            guess = RGB()
          })
      }
    }
  }
}

struct ContentView_Previews: PreviewProvider {
  static var previews: some View {
    ContentView(guess: RGB())
  }
}

struct ColorSlider: View {
  @Binding var value: Double
  var trackColor: Color

  var body: some View {
    HStack {
      Text("0")
      Slider(value: $value)
        .accentColor(trackColor)
      Text("255")
    }
    .padding(.horizontal)
  }
}
