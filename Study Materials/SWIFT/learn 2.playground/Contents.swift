import UIKit

var greeting="Hello, playground"
var message : String="i am not a message!! "
var firstname : String="Rohit"
var lastname : String="Hebbi"
var age=45
var fullname=firstname+" "+lastname // string concatenation
var message2 : String = "Hey my name is \(fullname) and i am \(age) years old." //string Interpolation

print(fullname)
print(message2)

message2.append(contentsOf: " And i like KitKat.")
print(message2)
var isis = message2.isEmpty
message2.customMirror
print(isis)

var words=message2.components(separatedBy: " ")
print(words)

