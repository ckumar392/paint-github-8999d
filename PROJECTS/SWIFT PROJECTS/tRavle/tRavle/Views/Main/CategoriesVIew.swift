//
//  CategoriesVIew.swift
//  tRavle
//
//  Created by Chandan Kumar on 22/12/22.
//

import SwiftUI

struct CategoriesView: View {
    var body: some View {
        NavigationView() {
            Text("Select categories")
                .navigationTitle("Categories")
        }
    }
}

struct CategoriesView_Previews: PreviewProvider {
    static var previews: some View {
        CategoriesView()
    }
}
