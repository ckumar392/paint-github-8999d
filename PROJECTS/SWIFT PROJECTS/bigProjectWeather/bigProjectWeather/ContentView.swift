//
//  ContentView.swift
//  bigProjectWeather
//
//  Created by Chandan Kumar on 25/02/23.
//

import SwiftUI
import MapKit

struct ContentView: View {
    @State private var showingAlert = false
    @State private var isNight = false
    var body: some View {
        NavigationView()
        {
            NavigationLink(destination: DIsplayWeatherView()){
                Text("View weather")
            }
        .navigationTitle("Home")
        }
        
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
struct DIsplayWeatherView: View {
    @State private var showingAlert = false
    @State private var isNight = false
    var body: some View {
        ZStack{
            
            BackgroundView(topColor: isNight ? .black : .purple , bottomColor: isNight ? .gray : .cyan)
            VStack(){
                //this is to inform the
                Text("Ranchi, Jharkhand")
                    .foregroundColor(.white)
                    .font(.system(size: 33, weight: .medium))
                    .padding(.top,40)
                Text("INDIA")
                    .foregroundColor(.white)
                    .font(.system(size: 20, weight: .regular))
                Image(systemName: isNight ?"moon.stars.fill" : "sun.dust.fill")
                    .renderingMode(.original)
                    .resizable()
                    .frame(width: 200,height: 200)
                    .aspectRatio(contentMode: .fit)
                    .padding(.top,80)
                Text("25° C")
                    .foregroundColor(.white)
                    .font(.system(size: 33, weight: .medium))
                    .padding(.top,20)
                
                //var countPressed = 1;
                ScrollView(.horizontal){
                    Spacer()
                    HStack(spacing: 50){
                        DayView(dayOfWeek: "TUE", imageName: "cloud.sun.rain.fill", temperature: 23)
                        DayView(dayOfWeek: "WED", imageName: "cloud.sun.bolt.fill", temperature: 26)
                        DayView(dayOfWeek: "THU", imageName:"cloud.sun.fill", temperature: 28)
                        DayView(dayOfWeek: "FRI", imageName: "sun.max.fill", temperature: 28)
                        DayView(dayOfWeek: "SAT", imageName: "sun.max.fill", temperature: 27)
                        DayView(dayOfWeek: "TUE", imageName: "cloud.sun.rain.fill", temperature: 23)
                        DayView(dayOfWeek: "WED", imageName: "cloud.sun.bolt.fill", temperature: 26)
                        DayView(dayOfWeek: "THU", imageName:"cloud.sun.fill", temperature: 28)
                        DayView(dayOfWeek: "FRI", imageName: "sun.max.fill", temperature: 28)
                        DayView(dayOfWeek: "SAT", imageName: "sun.max.fill", temperature: 27)
                        
                        
                    }
                    Spacer()
                }
                
                
                Button{
                    print("button is pressed!")
                    showingAlert = true
                    isNight.toggle()
                    //BackgroundView(topColor: .gray, bottomColor: .white)
                } label: {
                    WeatherButton(title: "change display mode", textColor: .blue, backgroundColor: .white)
                }
                .alert("Background changed!", isPresented: $showingAlert) {
                    Button("close", role: .cancel) { }
                }
                Spacer()
            }
        }
        
    }
}

struct DIsplayWeatherView_Previews: PreviewProvider {
    static var previews: some View {
        DIsplayWeatherView()
    }
}

struct DayView: View {
    var dayOfWeek: String
    var imageName: String
    var temperature: Int
    var body: some View {
        HStack{
            VStack{
                Text(dayOfWeek)
                    .foregroundColor(.white)
                    .font(.system(size: 16, weight: .medium))
                
                Image(systemName: imageName)
                    .renderingMode(.original)
                    .resizable()
                    .frame(width: 40,height: 40)
                    .aspectRatio(contentMode: .fit)
                Text("\(temperature)°")
                    .foregroundColor(.white)
                    .font(.system(size: 20,weight: .bold))
            }
        }
    }
}

struct BackgroundView: View {
    var topColor: Color
    var bottomColor: Color
    var body: some View {
        LinearGradient(colors: [topColor,bottomColor], startPoint: .topLeading, endPoint: .bottomTrailing)
            .edgesIgnoringSafeArea(.all)
    }
}
//having it being done on different stream we can still push it as a stable update.
