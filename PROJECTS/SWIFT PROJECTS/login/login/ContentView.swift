//
//  ContentView.swift
//  login
//
//  Created by Chandan Kumar on 17/08/22.
//

import SwiftUI

struct ContentView: View {
    @State var email = ""
    @State var password = ""
    var body: some View {
            ZStack{
                //Color.black.ignoresSafeArea()
                RoundedRectangle(cornerRadius: 80).foregroundStyle(.linearGradient(colors:[.red, .blue], startPoint: .topLeading, endPoint: .bottomTrailing)).rotationEffect(.degrees(125))
                    .frame(width: 600, height: 500)
                    .offset(y:-500)
                RoundedRectangle(cornerRadius: 80).foregroundStyle(.linearGradient(colors:[.red, .blue], startPoint: .topLeading, endPoint: .bottomTrailing)).rotationEffect(.degrees(135))
                    .frame(width: 600, height: 500)
                    .offset(y:500)
                RoundedRectangle(cornerRadius: 100).foregroundStyle(.linearGradient(colors:[.red, .blue], startPoint: .topLeading, endPoint: .bottomTrailing))
                    .frame(width: 400, height: 50)
                    .offset(y:-40)
                RoundedRectangle(cornerRadius: 100).foregroundStyle(.linearGradient(colors:[.red, .blue], startPoint: .topLeading, endPoint: .bottomTrailing))
                    .frame(width: 400, height: 50)
                    .offset(y:60)
                VStack{
                    
                    Text("Welcome ").foregroundColor(.white).font(.system(size: 80)).padding([.bottom],120).controlSize(/*@START_MENU_TOKEN@*/.large/*@END_MENU_TOKEN@*/)
                    Text("User ID").foregroundColor(.white).font(.system(size: 30)).padding([.vertical,.trailing],100)
                    TextField("Email or User Id", text: $email)
                    Text("Password").foregroundColor(.white).font(.system(size: 30)).padding()
                    SecureField("pass", text: $password).padding()
                    Text("Login ").foregroundColor(.blue).font(.system(size: 40)).padding([.horizontal,.trailing],10)
                    Text("[ Forgot password ? ]").foregroundColor(.red).font(.system(size: 15)).padding()
                    Text("[ Create a new account ] ").foregroundColor(.blue).font(.system(size:15)).padding()
                }
        }
       
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView().preferredColorScheme(.dark).previewInterfaceOrientation(.portrait)
    }
}

