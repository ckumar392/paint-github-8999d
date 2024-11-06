#include <iostream>
using namespace std;

void print_sub_array(int a[],int n)
{
    int sum = 0;
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i;j<n; j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << a[k]<<" ";
                sum+=a[k];
            }
            cout<<"\t\t\t\t\t\t\t\tsum is\t"<<sum<<endl;
            maxi=max(sum,maxi);
            sum=0;
        }
    }
    cout<<"max sum is "<<maxi<<endl;
}
int main()
{
    int a[]={1,2,3,4,5};
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