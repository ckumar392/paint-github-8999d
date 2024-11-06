//print recursively the fibonacci series
#include <iostream>
using namespace std;
int rec_fibo(int n){
    if(n==1 || n==0){
        return n;
    }
    return rec_fibo(n - 1) + rec_fibo(n - 2);
    
}
int main()
{
    int n=5;
    cout<<rec_fibo(n);
    return 0;
}