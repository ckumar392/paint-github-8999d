#include <iostream>
using namespace std;

void print_sub_array(int a[],int n)
{
    int maxi=INT_MIN;
    int pre_sum[n];
    pre_sum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre_sum[i]=a[i]+pre_sum[i-1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            maxi=i==0 ? pre_sum[j] : max(maxi,pre_sum[j]-pre_sum[i-1]);
        }
    }
    cout<<"maximum sub-array sum: "<<maxi<<endl;
}
int main()
{
    int a[]={1,-2,3,4,-3};
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