//
//  TabBar.swift
//  tRavle
//
//  Created by Chandan Kumar on 22/12/22.
//

import SwiftUI

struct TabBar: View {
    var body: some View {
        TabView {
            HomeView()
                .tabItem{
                    Label("Home" , systemImage: "house")
                }
            CategoriesView()
                .tabItem{
                    Label("Categories" , systemImage: "square.split.2x2")
                }
            NewLocationView()
                .tabItem{
                    Label("Add" , systemImage: "car.2.fill")
                }
            FavouritesView()
                .tabItem{
                    Label("Favourites" , systemImage: "heart.fill")
                }
            SettingsView()
                .tabItem{
                    Label("Favourites" , systemImage: "gear.badge")
                }
            
        }
    }
}

struct TabBar_Previews: PreviewProvider {
    static var previews: some View {
        TabBar()
    }
}
