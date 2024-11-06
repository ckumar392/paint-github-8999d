//
//  LocationModel.swift
//  tRavle
//
//  Created by Chandan Kumar on 22/12/22.
//

import Foundation

enum continent : String {
    case asia = "Asia "
    case europe = "Europe"
    case africa = "Africa"
    case north_america = "North America"
    case antartica = "Antartica"
    
}

struct location : Identifiable {
    let id  = UUID()
    let name : String
    let image : String
    let description : String
    let continent : continent.RawValue
    let route : String
    let directions : String
    let date : String
    let url : String
}

extension location {
    static let all : [location] = [
        location(
            name: "Paris",
            image: "https://images.pexels.com/photos/342113/pexels-photo-342113.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=2",
            description: "The City of Light draws millions of visitors every year with its unforgettable ambiance. Of course, the divine cuisine and vast art collections deserve some of the credit as well. The gentle River Seine rambles through the city, flanked by stately museums, centuries-old churches, and blocks of Rococo- and Neoclassic-design architecture, further enhanced by cascading trees and glowing streetlamps. Peppering the Seine's cobbled walks and graceful bridges are impossibly chic Parisians, probably on their way to the market, cafe or cinema.                                            Containing world-class museums, fashion, cuisine and an atmosphere all its own, Paris is also a city of many splendors, as Ernest Hemingway recalled in his memoir, A Moveable Feast. Visit the beloved Musée d'Orsay, shop the biggest designers on the Champs Élysées or hit the boutiques in Le Marais, take in the view atop the Eiffel Tower, or even plan a day trip to Versailles Palace. But don't miss out on the simple pleasure of meandering the marvelous arrondissements (districts), or snacking on street crepes either.",
            continent: "Europe",
            route: " data ",
            directions: " data ",
            date: " data ",
            url: " data "
        ),
        location(
            name: "Maui",
            image: "",
            description: "Maui is not nearly as large as the Big Island, nor is it as small as Lanai, as bustling as Oahu or as quiet as Kauai. For many Hawaii vacationers, Maui is just right – offering a taste of just about everything the Aloha State has to offer, from impressive wildlife to intriguing history and culture. While on a visit here, you can shimmy alongside professional hula dancers, golf along coastal fairways, sail down a zip line, snorkel alongside five different types of sea turtles or simply lounge along some of Hawaii's most notable beaches.                                               One of the archipelago's most popular tourism spots, Maui can be found sandwiched between the Big Island and the much tinier Molokai (which you can explore by signing up for one of the best Maui tours). Maui is divided into five distinct regions: Many travelers base themselves along the coasts of South Maui (home to the famous Wailea Beach) or West Maui, where the sands of Kaanapali Beach and the music from the Old Lahaina Luau are located. But the rest of the island should not be missed. Travel along the Road to Hana to experience East Maui's scenic coastline, explore Haleakala – the world's largest dormant volcano – in the Upcountry and discover the former tribal battlegrounds of Central Maui's Iao Valley State Park. And for a bird's-eye view of it all, reserve a spot on one of Maui's best helicopter tours.",
            continent: "North America",
            route: " data ",
            directions: " data ",
            date: " data ",
            url: " data "
        ),
        location(
            name: "Rome",
            image:"https://images.unsplash.com/photo-1531572753322-ad063cecc140?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxzZWFyY2h8M3x8cm9tZXxlbnwwfHwwfHw%3D&auto=format&fit=crop&w=900&q=60",
            description: "Rome, the city of seven hills, enjoyed a mythic beginning. Romulus and Remus – twin brothers who were nursed by a she-wolf and fathered by a war god – reportedly founded the Eternal City. And although historians are a little skeptical about this epic entry into the world, most travelers are absolutely certain that there is something magical about Rome. Whether it's the mystery of nearby Vatican City or the ghosts of the Colosseum, an afternoon caffè on Piazza Navona or a piled-high plate of pasta at a trattoria, Roma is sure to enchant. Italy's capital city, Rome is also known for a history that dates back to the eras of Octavian, Julius Caesar and Hadrian, among others. Left behind are structures like the Pantheon, the Roman Forum and dozens of churches, among other historic gems. Art enthusiasts will relish the trove of art housed at the Vatican Museums, and foodies will enjoy the splendid Italian fare, not to mention the gelato. And though its momentous past is the focus for many vacationers, Rome is also a fast-paced, modern and relevant city, with gleaming designer storefronts, sleek hotels and cutting-edge restaurants.",
            continent: "Europe",
            route: " data ",
            directions: " data ",
            date: " data ",
            url: " data "
        ),
        location(
            name: "Tokyo",
            image: " data ",
            description: "Animatedis perhaps the best word to describe Tokyo. Crazy about its anime, Japan's mega city is constantly buzzing with movement – feet clacking down sidewalks, cars zooming along streets, subway trains humming below ground, ships cruising in and out. And yet bright lights and loud signs beg you to pause, to break your motion for just one second to pray (oops, we mean pay) at the altar of consumerism. This is a city that feeds on motion and progress.But when you want to stop in Tokyo, the city will certainly make it worth your while. The tech-savvy locals may whizz past the monuments and urban parks daily (except during the cherry blossom season when everyone floods the green space), but, we assure you, the museums and historical sites are world-class. Here, there are photos to be taken, sushi to be eaten and a lot of shopping to be done. So what are you waiting for? You better get a move on.",
            continent: "Asia",
            route: " data ",
            directions: " data ",
            date: " data ",
            url: " data "
        )
        
        
    ]
}
