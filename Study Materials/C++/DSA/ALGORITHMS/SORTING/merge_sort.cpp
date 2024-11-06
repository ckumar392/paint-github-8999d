#include <iostream>
#include<vector>
using namespace std;
// void merge2(int a[],int l, int mid, int h)
// {
//     vector<int> temp;
//     int r=mid+1;
//     while(l<=mid && r<=h)
//     {
//         if(a[l]<=a[mid])
//         {
//             temp.push_back(a[l]);
//             l++; 
//         }
//         else 
//         {
//             temp.push_back(a[r]);
//             r++;
//         }
//     }
//     while(l<=mid)
//         temp.push_back(a[l++]);
//     while(r<=h)
//         temp.push_back(a[mid++]);
//     for(int i=l;i<=h;i++)
//     {
//         nums[i]==temp[i-low];
//     }
// }
void merge(int a[],int s,int mid,int e)
{
    int n1= mid-s+1, n2=e-mid;
    int a1[n1],a2[n2];
    for(int i=0; i<n1; i++)
        a1[i]=a[i+s];
    for(int j=0; j<n2; j++)
        a2[j]=a[mid+1+j];
    int i, j, k;
    i = 0;
    j = 0;
    k = s;

    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            a[k]=a1[i];
            i++;
        }else{
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=a1[i];
        i++;k++;
    }
    while(j<n2){
        a[k]=a2[j];
        j++;k++;
    } 
}

void merge_sort(int a[],int s,int e){
    if(s<e){
    int mid=s+(e-s)/2; // same as (s+e)/2
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    merge(a,s,mid,e);
    }
}

void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={7,0,-8,55,2,1,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    merge_sort(arr,0,n-1);
    display(arr,n);
    return 0;
} 
