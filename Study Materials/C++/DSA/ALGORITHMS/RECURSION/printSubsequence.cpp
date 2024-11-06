#include<iostream>
#include<vector>
using namespace std;
void printSub(int arr[],int index,vector<int> v,int n)
{
    if(index==n)
    {
        for(int i : v )
            cout<<i<<" ";
        cout<<"\n";
        return;
    }
    //pick the next 
    v.push_back(arr[index]);
    printSub(arr,index+1,v,n);
    v.pop_back();
    //don't pick the next
    printSub(arr,index+1,v,n);
}
int main()
{
    vector<int> v1;
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printSub(arr,0,v1,size);
    return 0;
}
