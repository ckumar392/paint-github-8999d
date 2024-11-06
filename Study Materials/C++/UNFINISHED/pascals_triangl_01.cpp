#include<iostream>
#include<math.h>
using namespace std;

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// this is equal to row [C] column

int facto(int n)
{
    if(n > 1)
    return n * facto(n - 1);
    else
    return 1;
}


//factorial
int factorial(int n)
{
    int fact=1;
    for(int i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    return fact;
}


//ncr/nc(n-r)
int main(){
    int n; cin>>n;
    int j=0;
    //cout<<factorial(n);
    for(int i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
    return 0;
}