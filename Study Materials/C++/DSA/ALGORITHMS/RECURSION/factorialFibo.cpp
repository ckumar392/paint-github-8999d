#include<iostream>
using namespace std;

int fact(int num)
{
    if(num==1)
        return 1;
    return num * fact(num-1);
}
int fibo(int num)
{
    if(num==1 || num==0)
        return num;
    return fibo(num-1)+fibo(num-2);
}

void fibon(int num)
{
    static int n1=0,n2=1,n3;
    if(num>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<"\t";
        fibon(num-1);
    }
}
int main()
{
    // cout<<"Enter the number whose factorial is required-->\t";
    // int n; cin>>n;
    cout<<fact(5)<<endl;
    cout<<fibo(5)<<endl;
    fibon(10);
    return 0;
}