#include<iostream>
using namespace std;
//find uinon of two sorted arrays
int main()
{
    int arr1[]={1,1,2,3,4,5};
    int arr2[]={2,3,4,4,5,6};
    int i=0,j=0,m,k=0,s1=sizeof(arr1)/sizeof(arr1[0]),s2=sizeof(arr2)/sizeof(arr2[0]);
    int tot=s1+s2,n[tot];
    for(i=0;i<s1;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    for(i=0;i<s2;i++)
        cout<<arr2[i]<<" ";
    cout<<endl;
    i=0;
    j=0;
    k=0;
    while(tot--)
    {
        if(arr1[i]<=arr2[j])
        {
            // cout<<"\nadding arr1 element --> "<<arr1[i]<<endl;
            n[k]=arr1[i];
            i++;
            k++;
        }
    // int arr1[]={1,1,2,3,4,5};
    // int arr2[]={2,3,4,4,5,6};
        else if(arr1[i]>arr2[j])
        {
            n[k]=arr2[j];
            j++;
            k++;
        }
        cout<<n[k-1]<<" ";
    }
    // int sizz=sizeof(n)/sizeof(n[0]);
    // for(i=0;i<sizz;i++)
    //     cout<<n[i]<<" ";
    //if 1 me bacha
    //if 2 me bacha
    
}