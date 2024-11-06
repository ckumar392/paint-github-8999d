#include <iostream>
using namespace std;

void print_sub_array(int a[],int n)
{
    int total=0;
    int left_max[n],right_max[n];
    int sum=0;
    left_max[0] =a[0];
    right_max[n-1] =a[n-1];
    for(int i=1;i<n;i++)
    {
        left_max[i] = max(a[i],left_max[i-1]);
    }
    for(int i=n-2;i>0;i--)
    {
        right_max[i] =max(a[i],right_max[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        total+= min(left_max[i],right_max[i]) - a[i];
    }
    cout<<"\n\nHey bro you stored water "<<total<<" L in total"<<endl;
}
int main()
{
    int a[]={4,2,0,6,3,2,5};   
    int size= sizeof(a) / sizeof(a[0]);
    print_sub_array(a,size);
    return 0;
}