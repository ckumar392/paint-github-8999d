//
//  TimerState.swift
//  Intervally WatchKit Extension
//
//  Created by Chandan on 7/25/22.
//  Copyright © 2020 Chandan Kumar.All rights reserved.
//

import SwiftUI

enum TimerState: Int, CaseIterable {
    case playing, paused, done

    var isDone: Bool { self == .done }
    
    var leaveImage: Image {
        self == .done ? Image("arrow.left") : Image("xmark")
    }
    
    var toggleImage: Image {
        self == .playing ? Image("pause.fill") : Image("play.fill")
    }
    
    var toggleState: TimerState {
        switch self {
        case .playing: return .paused
        case .paused: return .playing
        case .done: return .done
        }
    }
    
    func playLeaveSound() {
        if self != .done { WKInterfaceDevice.current().play(.retry) }
    }
    
    func playToggleSound() {
        switch self {
        case .paused: WKInterfaceDevice.current().play(.failure)
        case .playing: WKInterfaceDevice.current().play(.success)
        default: break
        }
    }
    
    func playTimerSound() {
        switch self {
        case .done: WKInterfaceDevice.current().play(.stop)
        default: WKInterfaceDevice.current().play(.start)
        }
    }
}
