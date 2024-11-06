//prime numbers between two numbers 

#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n)
{
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0)
        { 
            return false;
        }
    }
    return true;
}

int main()
{
   int a ,b;
   cout<<"Enter two numbers between which all prime numbers are to be found-:\n";
   cin>>a>>b;
   cout<<endl;
   for(int i=a; i<=b; i++)
   {
    if(isprime(i)) {
        cout<<i<<"\t";
    }
   }
}