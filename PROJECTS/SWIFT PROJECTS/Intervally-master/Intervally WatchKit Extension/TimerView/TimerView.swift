//
//  TimerView.swift
//  Intervally WatchKit Extension
//
// Created by Chandan on 7/25/22.
//  Copyright © 2020 Chandan Kumar.All rights reserved.
//

import SwiftUI

struct TimerView: View {
    @Binding var onTimerScreen: Bool
    @Binding var session: WKExtendedRuntimeSession
    @State var seconds: Int
    @State var intervals: [Int]
    @State private var index: Int = 0
    @State private var to: CGFloat = 0
    @State private var state: TimerState = .playing
    @State private var time = Timer.publish(every: 1, on: .main, in: .common).autoconnect()
    
    var body: some View {
        VStack {
            Spacer()
            ZStack {
                Ring(to: $to)
                
                if !state.isDone {
                    VStack {
                        Text("\(seconds)")
                            .font(.system(size: 50,
                                          weight: .medium,
                                          design: .rounded))
                        Text("\((self.index + 2) / 2) of \(intervals.count)")
                            .font(.system(size: 21,
                                          weight: .medium,
                                          design: .rounded))
                            .padding(.top)
                    }
                } else {
                    Text("Done!")
                        .modifier(TextStyle(fontSize: 44,
                                            fontWeight: .medium,
                                            color: Color.white))
                }
            }
            
            HStack(alignment: .center, spacing: 10) {
                Button(action: {
                    self.state.playLeaveSound()
                    self.onTimerScreen = false
                }) {
                    state.leaveImage
                        .modifier(TimerImage(weight: .heavy))
                }
                .buttonStyle(RoundButtonStyle(size: 42.0))
                Spacer()
                Button(action: {
                    self.state = self.state.toggleState
                    self.state.playToggleSound()
                }) {
                    state.toggleImage
                        .modifier(TimerImage(weight: .bold))
                }
                .buttonStyle(RoundButtonStyle(size: 42.0))
            }
            .frame(height: 42)
        }
        .navigationBarHidden(true)
        .onAppear() {
            self.session.start()
            self.state.playTimerSound()
        }
        .onReceive(self.time) { _ in
            self.handleTimeTrigger()
        }
    }
    
    private func handleTimeTrigger() {
        switch self.state {
        case .playing:
            self.seconds -= 1
            if self.seconds == 0 {
                self.index += 1
                if self.index < intervals.count {
                    self.seconds = self.intervals[index]
                } else {
                    state = .done
                }
                self.state.playTimerSound()
            }
            withAnimation(.default) {
                var timeLeft = seconds
                for index in intervals.indices where self.index < index {
                    timeLeft += intervals[index]
                }
                self.to = CGFloat(timeLeft) / CGFloat(self.intervals.reduce(0, +))
            }
        case .done:
            self.time.upstream.connect().cancel()
            self.session.invalidate()
        case .paused: break
        }
    }
    
    struct TimerImage: ViewModifier {
        @State var weight: Font.Weight
        
        func body(content: Content) -> some View {
            content
                .font(Font.body.weight(weight))
                .foregroundColor(.black)
        }
    }
}
