//
//  ContentView.swift
//  testing buttons
//
//  Created by Chandan Kumar on 09/08/22.
//
import SwiftUI

struct ContentView: View {
    @State private var showDetails = false
    @State var email = ""
    var body: some View {
        VStack(alignment: .leading) {
            Button("Show details") {
                showDetails.toggle()
                showDetails.toggle()
                showDetails.toggle()
                TextField("Email", text: $email)            }

            if showDetails {
                Text("i saw you clicked a button !!!!!!!")
                    .font(.largeTitle)
            }
        }
    }
}
