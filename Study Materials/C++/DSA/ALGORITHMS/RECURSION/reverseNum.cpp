#include<iostream>
using namespace std;

int rev(int num)
{
    static int ans=0;
    int rem;
    if(num==0)
        return 0;
    rem=num%10;
    ans=ans*10+rem;
    rev(num/10);
    return ans;
}
int main()
{
    int n=1234;
    cout<<"reverse is --> \t";
    cout<<rev(n);
}