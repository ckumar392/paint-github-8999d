#include<iostream>
using namespace std;

void disp(int arr[],int n)
{
    for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";
}

void cyclicRotatebyOneL(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n-1] = temp;
}

void cyclicRotatebyOneR(int arr[], int n)
{
    //int arr[] = { 10, 20, 30, 40, 50, 60, 70};
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    
}

void cyclicRotate(int arr[], int k, int n)
{
    for (int i = 0; i < k; i++)
        cyclicRotatebyOneR(arr, n);
}

void rReverseTechnique(int arr[],int k,int n)
{
    reverse(arr,arr+n);
    reverse(arr+k,arr+n);
    reverse(arr,arr+k);
}

void lReverseTechnique(int arr[],int k,int n)
{
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { 1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    
    // cyclicRotate(arr, k, n);
    cout<<"reversing the given array <-- ";
    disp(arr,n);
    cout<<" --> by "<<k<<" times we get :"<<endl;
    rReverseTechnique(arr,k,n);
    disp(arr,n);

    return 0;
}