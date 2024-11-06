// Find the minimum element in the unsorted array 
// and replace it with the beginning element

#include<iostream>
#include<algorithm>
using namespace std;
void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }  
}
int main()
{
    int arr[8]={9,21,3,74,15,198,18,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    for(int i=0; i<n-1; i++) 
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[i]>arr[j])
            {   
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"\nPRINTING IN ASCENDING ORDER --> ";
    display(arr,n);
    for(int i=0; i<sizeof(arr)/sizeof(arr[0])-1; i++) 
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[i]<arr[j])
            {   
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"\nPRINTING IN DESCENDING ORDER--> ";
    display(arr,n);
    return 0;
}
