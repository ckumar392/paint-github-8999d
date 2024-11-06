//
//  SelectorView.swift
//  Intervally WatchKit Extension
//
//  Created by Chandan on 7/25/22.
//  Copyright © 2020 Chandan Kumar.All rights reserved.
//

import SwiftUI

// MARK: - Content View
struct SelectorView: View {
    @Binding var session: WKExtendedRuntimeSession
    @State private var onTimerScreen = false
    @State var cases: [SelectorOptions] = [
        .timeOn(UserDefaults.standard.integer(forKey: "timerOn")),
        .timeOff(UserDefaults.standard.integer(forKey: "timeOff")),
        .rounds(UserDefaults.standard.integer(forKey: "rounds"))
    ]
    @State private var selectedType: SelectorOptions? = nil
    private var timeOn: SelectorOptions { cases[0] }
    private var timeOff: SelectorOptions { cases[1] }
    private var intervals: [Int] {
        var intervals: [Int] = []
        if case .rounds(let number) = cases.last {
            (0..<number).forEach { _ in
                intervals.append(timeOn.value)
                intervals.append(timeOff.value)
            }
        }
        return intervals
    }
    
    var body: some View {
        ZStack {
            ScrollView(showsIndicators: false) {
                VStack {
                    ForEach(cases, id: \.self) { type in
                        SelectorButton(type: type) {
                                        withAnimation {
                                            self.selectedType = type
                                        }
                        }
                    }
                    NavigationLink(destination: TimerView(onTimerScreen: $onTimerScreen,
                                                          session: $session,
                                                          seconds: intervals[0],
                                                          intervals: intervals),
                                   isActive: $onTimerScreen,
                                   label: {
                                    Text("Start!")
                                        .modifier(TextStyle(fontSize: 18,
                                                            fontWeight: .semibold, color: Color("button")))
                    })
                        .buttonStyle(RoundButtonStyle(size: 70.0))
                }
            }
            if selectedType != nil {
                GeometryReader {_ in
                    PickerPopUp(type: self.$selectedType,
                                selectedAmount: self.selectedType!.associatedValue) { amount in
                                    self.pickerSetTask(type: self.selectedType!, amount: amount)
                    }
                }
                .background(Color.black.opacity(0.75).edgesIgnoringSafeArea(.all))
            }
        }.navigationBarHidden(true)
    }
    
    private func pickerSetTask(type: SelectorOptions, amount: Int) {
        switch type {
        case .timeOn: cases[0] = .timeOn(amount)
        case .timeOff: cases[1] = .timeOff(amount)
        case .rounds: cases[2] = .rounds(amount)
        }
        
        UserDefaults.standard.set(type.associatedValue, forKey: type.key)
        
        self.selectedType = nil
        self.storeUserDefault()
    }
    
    private func storeUserDefault() {
//        switch self.type {
//        case .timeOn: UserDefaults.standard.set(self.timeOn, forKey: "timerOn")
//        case .timeOff: UserDefaults.standard.set(self.timeOff, forKey: "timeOff")
//        default: UserDefaults.standard.set(self.rounds, forKey: "rounds")
//        }
    }
}

#if DEBUG
struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        Text("")
    }
}
#endif
