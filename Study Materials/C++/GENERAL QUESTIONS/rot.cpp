#include<iostream>
using namespace std;

void rot(int a[],int n)
{
    int i,count =0;
    int b[n];
    b[0]=a[n-1];
    b[n-1]=a[n-2];
    for(i=1;i<n-1;i++)
    {
        b[i]=a[i-1];
    }
    for(i=0;i<n;i++)
    {
        cout << b[i];
    }
    count++;
    if(count==3) return;
    rot(b,n);
    cout<<endl;
}

int main()
{
    int n ,i, size;
    cout<<"Enter the number of array elements -> \n";
    cin>>n;
    int arr1[n];
    cout<<"Enter the array elements -> \n";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    size=sizeof(arr1)/sizeof(arr1[0]);
    rot(arr1,size);
    // rot(arr1,size);
    // rot(arr1,size);
    


}

