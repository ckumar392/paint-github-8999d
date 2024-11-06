#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int length_of_array=sizeof(arr)/sizeof(arr[0]);;
    for(int i=0; i<length_of_array; i++){
        for(int j=i; j<length_of_array; j++)
        {
            for(int k=i;k<j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;  
}