#include <iostream>
using namespace std;

//constraints -:
//bar length must not be in ascending or descending order of length else trapped water=0
//number of bars must be greater than 2

int rain (int a[],int n)
{
    int twater=0 , watera;
    int leftmax[n], rightmax[n];
    leftmax[0]=a[0];
    for(int i=1;i<n;i++)
    {
        leftmax[i] = max(a[i],leftmax[i-1]);
    }
    rightmax[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i] = max(a[i],rightmax[i+1]);
    }

    for(int i=0;i<n;i++)
    {
        watera=min(rightmax[i],leftmax[i]);
        twater+=watera-a[i];
    }
    
    cout<<"trapped water is "<<twater<<endl;
}
int main()
{
    int height[] = {4,2,0,6,3,2,5};
    int size = sizeof(height)/sizeof(height[0]) ;
    cout<<rain(height,size)<<endl;
    return 0;
}