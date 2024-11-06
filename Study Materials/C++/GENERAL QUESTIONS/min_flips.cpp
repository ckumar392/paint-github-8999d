//Given a binary string, that is it contains only 0s and 1s. 
//We need to make this string a sequence of alternate characters by flipping 
//some of the bits, our goal is to minimize the number of bits to be flipped.
#include <iostream>
using namespace std;
//c1 even 0 odd 1
//c2 even 1 odd 0
int main()
{
    string str= "01001001101";
    cout<<"the string is --> "<<str<<endl;
    int c1=0, c2=0;
    for(int i=0; i<str.length(); i++)
    {
        if((i%2 == 0 && str[i] =='0') || (i%2 !=0 && str[i] =='1') ) c1++; 
        if((i%2 == 0 && str[i] =='1') || (i%2 !=0 && str[i] =='0') ) c2++; 
    }
    cout<<"The minimum value of flips required are -->"<<min(c1,c2)<<endl;
    return 0;
}