#include<iostream>
using namespace std;
double pow_recur(double m, int n)
{
    if (n==0) return 1;
    if(n%2==0) return pow_recur(m*m,n/2);
    else return m*pow_recur(m*m,(n-1)/2); 

}

double myPow(double x, int n) {
        if (n==0) return 1;
        if(n%2==0) return myPow(x*x,n/2);
        else return x*myPow(x*x,(n-1)/2); 
    }

int main()
{
    //cout<<pow_recur(2.980,-4);
    cout<<myPow(2,3);
    return 0;  
}