#include <iostream>
//#include  <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string s1,s2;
    //cin >> s1; //this will not take string input with spaces
    cout<<"Enter a string to be operated on ->> \n";
    getline(cin, s1);  //to take string input with spaces
    cout << s1 << endl;

    string s;
    //SIZE OPERATIONS

    cout<<"\nsize is "<<s1.size(); //returns the length of the string

    cout<<"\nlength is "<<s1.length(); //returns the length of the string

    cout<<"\ncapacity is "<<s1.capacity(); //returns the capacity of the string

    //Find or search operations

    //s1.find("a"); //returns the index of the first occurence of the character

    string str;
    cout<<"\nenter the string to be searched ";
    getline(cin, str);
    if(s1.find(str)<=s1.size())
    {
        cout<<"\nfound\n";
        cout<<s1.find(str);
    }
    else
    {
        cout<<"\nnot found";
    }

   // finding thee index of first occurence afer the index 'n'
   cout<<"\nenter the index after which to search->  \n";
   int n; cin>>n;
   cout<<"\nindex of first occurence after "<<n<<" is ";
   if(s1.find(str,n)<=s1.size())
   {
       cout<<"\nfound\n";
       cout<<s1.find(str,n);
   }
   else
   {
       cout<<"\nnot found";
   }

   //finding the first unmached character in the given two string
   cout<<"\nFirst unmached character found is -->"<<s1.find_first_not_of(str);

   //reverse the string using reverse function
   cout<<"\nreverse of the string "<<s1;
   reverse(s1.begin(),s1.end());
   cout<<" is --\n\n"<<s1;

   //returns the part of the string starting and ending at the given index
   s.substr(2, 3);

   //s1.resize(5); //resize the string to the given size and fill the remaining with the given character
   s1.resize(5,'c');
   cout<<"\n\n"<<s1;

   //insert a new character at the given index

   s1.insert(2, " >>inserted<< ");
   cout<<s1;

   //replaces the substring starting from the index 2 and ending at the index 3 with the string "a"
   s.replace(2, 3, "a"); 

   //swap one string with other 
   s.swap(s2); 

   //returns the character at the index 2 
   s.at(2); 

   //returns the first character of the string
   s.front(); 

   //returns the last character of the string
   s.back(); 

   
}