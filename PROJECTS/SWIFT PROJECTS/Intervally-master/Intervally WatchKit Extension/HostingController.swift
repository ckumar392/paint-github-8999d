//
//  HostingController.swift
//  Intervally WatchKit Extension
//
//  Created by Chandan on 7/25/22.
//  Copyright © 2020 Chandan Kumar.All rights reserved.
//

import WatchKit
import Foundation
import SwiftUI
import os.log

class HostingController: WKHostingController<SelectorView>, WKExtendedRuntimeSessionDelegate {
    @State var session = WKExtendedRuntimeSession()
    
    deinit {
        session.invalidate()
    }
        
    override var body: SelectorView {
        setUserDefaults()
        session.delegate = self
        return  SelectorView(session: $session)
    }
    
    private func setUserDefaults() {
        if UserDefaults.standard.integer(forKey: "timerOn") == 0 {
            UserDefaults.standard.set(5, forKey: "timerOn")
        }
        if UserDefaults.standard.integer(forKey: "timeOff") == 0 {
            UserDefaults.standard.set(1, forKey: "timeOff")
        }
        if UserDefaults.standard.integer(forKey: "rounds") == 0 {
            UserDefaults.standard.set(4, forKey: "rounds")
        }
    }
    
    func extendedRuntimeSession(_ extendedRuntimeSession: WKExtendedRuntimeSession, didInvalidateWith reason: WKExtendedRuntimeSessionInvalidationReason, error: Error?) {
        if let error = error {
        os_log(.error, "Runtime Session Invalidated with Error: %@", error.localizedDescription)
        } else {
            os_log("Runtime Session Invalidated")
        }
    }
    
    func extendedRuntimeSessionDidStart(_ extendedRuntimeSession: WKExtendedRuntimeSession) {
        os_log("Runtime Session Started")
    }
    
    func extendedRuntimeSessionWillExpire(_ extendedRuntimeSession: WKExtendedRuntimeSession) {
        os_log("Runtime Session Will Expire")
    }
}
