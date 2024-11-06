// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
        //   0  1  2  3  4  
        //   4  0  1  2  3 
// Output:
// 5 1 2 3 4
#include<iostream>
using namespace std;

// int * rot(int * initial,int* final)
// {
//     int last = sizeof(initial)/sizeof(initial[0]);
//     initial[last] = final[0];
//     for(int i = 1; i < last; i++)
//     {
//         initial[i] = final[i+1];
//     }
//     return final;
// }

int main()
{
    int n,i,j,k;
    cout<<"enter number of array elements"<<endl;
    cin>>n;
    int arr[n];
    int reva[16]={[0 ... 15] = 1};
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reva[0]=arr[n-1];
     //   nor    0  1  2  3  4  
        //  rev  4  0  1  2  3 
    for(int i=1;i<n;i++)
    {
        reva[i]=arr[i-1];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<reva[i];
    }
    return 0;
}