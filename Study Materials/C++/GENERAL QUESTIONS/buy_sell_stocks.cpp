#include<iostream>
using namespace std;



void result(int a[],int n)

{
    int maxp=0,buy=INT_MAX,profit=0;
    for(int i=0;i<n;i++)
    {
        if(buy<a[i]) 
        {
            profit=a[i]-buy;
            cout<<"\nprofit of "<<profit<<" on day "<<i+1 <<" selling at "<<a[i]<<endl;
            maxp=max(profit,maxp);
        }
        else
        {
            cout<<"buy on day "<<i<<" at "<<a[i]<<endl;
            buy=a[i]; 
        }
    }
    cout<<"Max profit = "<<maxp<<endl;

}


int main()
{
    int stocks[] = {7,1,5,3,6,4};
    int size=sizeof(stocks)/sizeof(stocks[0]);
    result(stocks,size);
    return 0;
}