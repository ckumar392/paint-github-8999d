import UIKit

var myName:String = "chandu"
print("my name is \(myName).")

//array

var ar :[Int?]
var ar1 = [11,22,33,44,55]
print(ar1.count)
//print(a2.last) this will crash because we dont have the data .. we can use optionals here.

var fruits = ["strawberries", "limes", "tangerines"]
fruits[1] = "grapes"
fruits.append("anyFruit")
for s in fruits
{
    print(s)
}
//dictionary
var occupations = [
    "Malcolm": "Captain",
    "Kaylee": "Mechanic",
]
//occupations["Jayne"] = "Public Relations”
//dicc
for (x,y) in occupations
{
    print("\(x) works as \(y).")
}
var birthdayIsToday=true
var invitedGuests:[Int]=[]
var cakeCandlesLit=true
func singHappyBirthday() {
  if birthdayIsToday {
    if !invitedGuests.isEmpty {
      if cakeCandlesLit {
        print("Happy Birthday to you!")
      } else {
        print("The cake’ s candles haven’ t been lit.")
      }
    } else {
      print("It’ s just a family party.")
    }
  } else {
    print("No one has a birthday today.")
  }
}
