#include <iostream>
using namespace std;

void print_sub_array(int a[],int n)
{
    int max_sum=INT_MIN;
    int curr_sum;
    for(int i=0;i<n;i++){
        curr_sum += a[i];
        if(curr_sum<0) curr_sum=0;
        max_sum=max(curr_sum,max_sum);
    }
    cout<<"maximum sub-array sum: "<<max_sum<<endl;
}
int main()
{
    int a[]={-1,2,3,4,-3};
    // cout<<"enter the number of elements-->\t";
    // int n;cin >> n;
    // int a[n];
    // for(int i =0;i<n;i++)
    // {
    //     cin>>a[i];
    // }    
    int size= sizeof(a) / sizeof(a[0]);
    print_sub_array(a,size);
    return 0;
}