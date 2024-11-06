//
//  NewLocationView.swift
//  tRavle
//
//  Created by Chandan Kumar on 22/12/22.
//

import SwiftUI

struct NewLocationView: View {
    var body: some View {
        NavigationView() {
            Text("Locations")
                .navigationTitle("Add New Location")
        }
    }
}

struct NewLocationView_Previews: PreviewProvider {
    static var previews: some View {
        NewLocationView()
    }
}
