//
//  HomeView.swift
//  tRavle
//
//  Created by Chandan Kumar on 22/12/22.
//

import SwiftUI

struct HomeView: View {
    var body: some View {
        NavigationView() {
            List(location.all) {
                loc in Text(loc.name)
                    .navigationTitle("Home")
            }
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
    }
}
