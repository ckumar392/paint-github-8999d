//binary search for rotated arrays 
// 5 6 7 8 9 1 2 3 
#include<iostream>
using namespace std;
int minRot(int a[],int num)
{
    int s=0,e=num-1,mid;
    if(num==0) return a[mid];

    while(s<=e)
    {

        //4,5,6,7,0,1,2
        mid=(s+e)/2;
        int prev=(mid-1+num)%num;
        int next=(mid+1)%num; 
        // int prev=mid-1;
        // int next=mid+1;

        if(a[mid]<a[next] && a[mid]<a[prev]) return a[mid];
        //we will move towards the unsorted half of the array
        //because we are already at the lowest element if we see in sorted part
        
        if(a[s]<a[mid])//condition for sorted part hence skip to other part
            s=mid+1;

        else if (a[e]>a[mid])
            e=mid-1;
    }
    // return a[mid];
}
int main()
{
    
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the min element is -->\t"<<minRot(arr,n)<<endl;
}