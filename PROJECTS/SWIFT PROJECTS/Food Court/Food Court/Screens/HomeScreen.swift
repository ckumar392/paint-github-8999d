

import SwiftUI

struct HomeScreen: View {
    @State private var search: String = ""
    @State private var selectedIndex: Int = 1
    
    private let categories = ["All", "Burgers", "Pizaas", "Beverages", "Sandwiches", "Snacks"]
    var body: some View {
        NavigationView {
            ZStack {
                Color(#colorLiteral(red: 0.937254902, green: 0.937254902, blue: 0.937254902, alpha: 1))
                    .ignoresSafeArea()
                
                ScrollView (showsIndicators: false) {
                    VStack (alignment: .leading) {
                        
                        AppBarView()
                        
                        TagLineView()
                            .padding()
                        
                        SearchAndScanView(search: $search)
                        
                        ScrollView (.horizontal, showsIndicators: false) {
                            HStack {
                                ForEach(0 ..< categories.count) { i in
                                    Button(action: {selectedIndex = i}) {
                                        CategoryView(isActive: selectedIndex == i, text: categories[i])
                                    }
                                }
                            }
                            .padding()
                        }
                        
                        Text("Popular")
                            .font(.custom("PlayfairDisplay-Bold", size: 24))
                            .padding(.horizontal)
                        
                        ScrollView (.horizontal, showsIndicators: false) {
                            HStack (spacing: 0) {
                                ForEach(0 ..< 4) { i in
                                    NavigationLink(
                                        destination: DetailScreen(),
                                        label: {
                                            ProductCardView(image: Image("burger_\(i+1)"), size: 210)
                                        })
                                        .navigationBarHidden(true)
                                        .foregroundColor(.black)
                                }
                                .padding(.leading)
                            }
                        }
                        .padding(.bottom)
                        
                        Text("Best")
                            .font(.custom("PlayfairDisplay-Bold", size: 24))
                            .padding(.horizontal)
                        
                        ScrollView (.horizontal, showsIndicators: false) {
                            HStack (spacing: 0) {
                                ForEach(0 ..< 4) { i in
                                    ProductCardView(image: Image("burger_\(i)"), size: 180)
                                }
                                .padding(.leading)
                            }
                        }
                        
                    }
                }
                
                VStack {
                    Spacer()
                    BottomNavBarView()
                }
            }
        }
//        .navigationBarTitle("") //this must be empty
//        .navigationBarHidden(true)
//        .navigationBarBackButtonHidden(true)
    }
}

struct HomeScreen_Previews: PreviewProvider {
    static var previews: some View {
        HomeScreen()
    }
}



struct AppBarView: View {
    var body: some View {
        HStack {
            Button(action: {}) {
                Image(systemName: "menucard") .font(.largeTitle)
                    .padding().foregroundColor(.red)
                    .background(Color.white)
                    .cornerRadius(10.0)
            }
            
            Spacer()
            
            Button(action: {}) {
                Image(uiImage: #imageLiteral(resourceName: "Profile"))
                    .resizable()
                    .frame(width: 42, height: 42)
                    .cornerRadius(10.0)
            }
        }
        .padding(.horizontal)
    }
}

struct TagLineView: View {
    var body: some View {
        Text("Get the best meal\nin ")
            .font(.custom("PlayfairDisplay-Regular", size: 28))
            .foregroundColor(Color("Primary"))
            + Text("the area!")
            .font(.custom("PlayfairDisplay-Bold", size: 28))
            .fontWeight(.bold)
            .foregroundColor(Color("Primary"))
    }
}

struct SearchAndScanView: View {
    @Binding var search: String
    var body: some View {
        HStack {
            HStack {
                Image(systemName : "magnifyingglass.circle")
                    .padding(.trailing, 8).foregroundColor(.red)
                TextField("Search Food", text: $search)
            }
            .padding(.all, 20)
            .background(Color.white)
            .cornerRadius(10.0)
            .padding(.trailing, 8)
            
            Button(action: {}) {
                Image(systemName: "magnifyingglass") .font(.largeTitle)
                    .padding().foregroundColor(.red)
                    .background(Color.white)
                    .cornerRadius(8.0)
            }
        }
        .padding(.horizontal)
    }
}

struct CategoryView: View {
    let isActive: Bool
    let text: String
    var body: some View {
        VStack (alignment: .leading, spacing: 0) {
            Text(text)
                .font(.system(size: 18))
                .fontWeight(.medium)
                .foregroundColor(isActive ? Color("Primary") : Color.black.opacity(0.5))
            if (isActive) { Color("Primary")
                .frame(width: 15, height: 2)
                .clipShape(Capsule())
            }
        }
        .padding(.trailing)
    }
}

struct ProductCardView: View {
    let image: Image
    let size: CGFloat
    
    
    var body: some View {
        VStack {
            image
                .resizable()
                .frame(width: size, height: 200 * (size/210))
                .cornerRadius(20.0)
            Text("Veg Jumbo Burger").font(.title3).fontWeight(.bold)
            
            HStack (spacing: 2) {
                ForEach(0 ..< 4) { item in
                    Image("star")
                }
                Spacer()
                Text("₹55")
                    .font(.title3)
                    .fontWeight(.bold)
            }
        }
        
        .frame(width: size)
        .padding()
        .background(Color.white)
        .cornerRadius(20.0)
        
        
    }
    
}


struct BottomNavBarView: View {
    var body: some View {
        HStack {
            BottomNavBarItem(image: Image(systemName: "house.fill"), action: {}).foregroundColor(.red).font(.largeTitle)
            BottomNavBarItem(image: Image(systemName: "suit.heart.fill"), action: {}).foregroundColor(.red).font(.largeTitle)
            BottomNavBarItem(image: Image(systemName: "cart.fill"), action: {}).foregroundColor(.red).font(.largeTitle)
            BottomNavBarItem(image: Image(systemName: "person.fill"), action: {}).foregroundColor(.red).font(.largeTitle)
        }
        .padding()
        .background(Color.white)
        .clipShape(Capsule())
        .padding(.horizontal)
        .shadow(color: Color.blue.opacity(0.15), radius: 8, x: 2, y: 6)
    }
}

struct BottomNavBarItem: View {
    let image: Image
    let action: () -> Void
    var body: some View {
        Button(action: action) {
            image
                .frame(maxWidth: .infinity)
        }
    }
}