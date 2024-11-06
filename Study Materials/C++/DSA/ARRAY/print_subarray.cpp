#include <iostream>
using namespace std;

void print_sub_array(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i;j<n; j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << a[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int size= sizeof(a) / sizeof(a[0]);
    print_sub_array(a,size);
    return 0;
}