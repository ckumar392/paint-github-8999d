//
//  PickerPopUp.swift
//  Intervally WatchKit Extension
//
//   Created by Chandan on 7/25/22.
//

import SwiftUI

struct PickerPopUp: View {
    @Binding var type: SelectorOptions?
    @State var selectedAmount: Int
    let action: (Int) -> Void
    
    var body: some View {
        VStack {
            if type != nil {
                Picker(selection: $selectedAmount, label: Text("")) {
                    ForEach(1..<type!.upperBound) {
                        Text("\($0 * self.type!.multiplier)")
                            .font(.system(size: 30, weight: .semibold, design: .rounded))
                    }
                }
                Button(action: { self.action(self.selectedAmount) }) {
                    Text("Set")
                        .modifier(TextStyle(fontSize: 18,
                                            fontWeight: .semibold,
                                            color: Color("button")))
                }
                .background(LinearGradient(gradient: Gradient(colors: [Color("blue"), Color("darkBlue")]),
                                           startPoint: .top,
                                           endPoint: .bottom))
                    .cornerRadius(22)
            }
        }
    }

}
