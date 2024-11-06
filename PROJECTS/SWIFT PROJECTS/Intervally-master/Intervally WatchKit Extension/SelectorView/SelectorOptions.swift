//
//  SelectorOptions.swift
//  Intervally WatchKit Extension
//
//  Created by Chandan on 7/25/22.
//  Copyright © 2020 Chandan Kumar.All rights reserved.
//

import SwiftUI

enum SelectorOptions: Hashable {
    case timeOn(Int), timeOff(Int), rounds(Int)
    
    var image: Image {
        switch self {
            case .timeOn: return Image("stopwatch.fill")
            case .timeOff: return Image("stopwatch")
            case .rounds: return Image("arrow.clockwise")
        }
    }

    var header: String {
        switch self {
        case .timeOn: return "Change Time On"
        case .timeOff: return "Change Time Off"
        case .rounds: return "Change Rounds"
        }
    }
    
    var title: String {
        switch self {
        case .timeOn, .timeOff: return "\(value) Seconds"
        case .rounds: return "\(value) Round\(value > 1 ? "s" : "")"
        }
    }
    
    var associatedValue: Int {
        switch self {
        case .timeOn(let num),
             .timeOff(let num),
             .rounds(let num): return num
        }
    }
    
    var value: Int {
        switch self {
        case .timeOn, .timeOff: return associatedValue * 5 + 5
        case .rounds: return associatedValue + 1
        }
    }
    
    var upperBound: Int {
        switch self {
        case .timeOn, .timeOff: return 121
        case .rounds: return 100
        }
    }

    var multiplier: Int {
        switch self {
        case .timeOn, .timeOff: return 5
        case .rounds: return 1
        }
    }
    
    var key: String {
        switch self {
        case .timeOn: return "timeOn"
        case .timeOff: return "timeOff"
        case .rounds: return "rounds"
        }
    }
    
}
