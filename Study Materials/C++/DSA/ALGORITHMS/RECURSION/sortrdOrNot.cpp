#include<iostream>
using namespace std;

bool isSorted(int arr[],int count,int size)
{
    if (count==size-1) return true;
    return arr[count]<arr[count+1] && isSorted(arr,count+1,size);
    //return isSorted();
}
int main()
{
    int count=0,size;
    cout<<"What is the size of array--> "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements--> "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    if(isSorted(arr,0,size)) cout<<"its sorted!!"<<endl;
    else cout<<"not sorted"<<endl;

    return 0;
}