#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int siz=sizeof(arr)/sizeof(arr[0]);;
    for(int i=0; i<siz; i++){
        for(int j=i+1; j<siz; j++)
        cout<<arr[i]<<" "<<arr[j]<<endl;
    }
    return 0;  
}