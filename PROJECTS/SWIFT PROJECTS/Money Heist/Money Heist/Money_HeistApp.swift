//
//  Money_HeistApp.swift
//  Money Heist
//
//  Created by Workspace 1 on 24/12/21.
//

import SwiftUI

@main
struct Money_HeistApp: App {
    var body: some Scene {
        WindowGroup {
         TabView
            {
                NavigationView{
                    ContentView()
                }
                .tabItem{
                    Image(systemName: "T")
                    Text("Home")
                    Image(systemName: "house.circle")
                    Text("Home")
                }
                
            }
        }
        }
    }

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        <#statements#>
    }
    return self;
}

dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, <#dispatchQueue#>);
dispatch_source_set_timer(timer, DISPATCH_TIME_NOW, <#intervalInSeconds#> * NSEC_PER_SEC, <#leewayInSeconds#> * NSEC_PER_SEC);
dispatch_source_set_event_handler(timer, ^{
    <#code to be executed when timer fires#>
});
dispatch_activate(timer);
