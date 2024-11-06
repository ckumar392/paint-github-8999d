#include<iostream>
using namespace std;
void rev(int arr[],int s,int e)
{
    if(s==e)
        return;
    swap(arr[s],arr[e]);
    rev(arr,s+1,e-1);
}
int main()
{
    int arr[]={1,3,5,7,7,222,13};
    for(auto i : arr)
        cout<<"\n"<<i<<"\t";
    int size=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,size-1);
    for(auto i : arr)
        cout<<"\n"<<i<<"\t";
}