//
//  SelectorButton.swift
//  Intervally WatchKit Extension
//
//  Created by Chandan on 7/25/22.
//  Copyright © 2020 Chandan Kumar.All rights reserved.

import SwiftUI

struct SelectorButton: View {
    @State var type: SelectorOptions
    let action: () -> Void
    
    var body: some View {
        Button(action: action) {
            HStack {
                type.image
                    .resizable()
                    .aspectRatio(contentMode: .fit)
                    .font(Font.body.weight(.semibold))
                    .background(Color.clear.frame(width: 35, height: 35))
                    .frame(width: 35, height: 35)
                    .foregroundColor(Color("blue"))
                VStack {
                    Text(type.header)
                        .modifier(TextStyle(fontSize: 12,
                                            fontWeight: .heavy,
                                            color: Color("blue")))
                    Text(type.title)
                        .modifier(TextStyle(fontSize: 24,
                                            fontWeight: .bold,
                                            color: Color("blue")))
                }
                Spacer()
            }
        }
        .background(Color("button"))
        .cornerRadius(9)
    }
}
