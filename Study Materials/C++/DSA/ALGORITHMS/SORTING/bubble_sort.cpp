// repeatedly swap the adjacent elements if they are in wrong order
// we ll get sorted array of n elements in n-1 iterations
//Best Case	O(n)
// Average Case	O(n2)
// Worst Case	O(n2)
#include <iostream>
using namespace std;

int main()
{
    int arr[8]={9,21,3,74,15,198,18,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(auto x:arr) cout<<x<<"\t";

    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    cout<<endl;
    for(auto i:arr) cout<<i<<"\t";
    return 0;
} 