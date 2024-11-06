#include <iostream>
using namespace std;

int merge(int a[],int s,int mid,int e)
{
    int count = 0;
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
            count+=n1-i;
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
    return count;
}
int merge_sort(int a[],int s,int e){
    int count=0;
    if(s<e){
    int mid=s+(e-s)/2; // same as (s+e)/2
    count+=merge_sort(a,s,mid);
    count+=merge_sort(a,mid+1,e);

    count+=merge(a,s,mid,e);
    }
    return count;
}

void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={1, 20, 6, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    // merge_sort(arr,0,n-1);
    cout<<merge_sort(arr,0,n-1)<<endl;
    display(arr,n);
    return 0;
} 