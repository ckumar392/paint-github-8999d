//number which when added cubing its own digits returns itself 
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int orignal=n;
    int sum = 0;

    while(n>0)
    {
        int last=n%10;
        sum=sum + pow(last,3);
        n=n/10;
    }
    if(sum==orignal) cout<<"Its an Amstrong!";
    else cout<<"Not Amstrong!";
}