#include<iostream>
#include<vector>
using namespace std;
//count the subsequence if the sum is same as desired
int printSub(int arr[],int index,int n,int s,int sum)
{
    if(index==n)
        if(sum==s)
            return 1;        
        else return 0;
    //pick the next 
    sum+=arr[index];
    int l=printSub(arr,index+1,n,s,sum);
    sum-=arr[index];
    //don't pick the next
    int r =printSub(arr,index+1,n,s,sum);
    return l+r;
}
int main()
{
    int arr[]={4,4,8,1,7,6,2,5,3,8,8},s=8,size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of subsequences of arr with sum equal to 8 is--> ";
    cout<<printSub(arr,0,size,s,0)<<endl;
    return 0;
}
