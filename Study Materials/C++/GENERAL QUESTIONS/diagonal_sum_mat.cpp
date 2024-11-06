#include<iostream>
using namespace std;

void sum1(int a[][4], int r , int c) // brute force O(n^2)
{
    int s1=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(i==j) s1+=a[i][j]; 
           else if(i+j==r-1) s1+=a[i][j];
        }
        
    }
    cout<<s1<<"\n";
}

//i+j=n-1

void sum2(int a[][4], int r, int c) // better approach O(n)
{
    int s2=0;
    for(int i=0;i<r;i++)
    {
        s2=s2+a[i][i];
        s2=s2+a[i][r-i-1];   
    }
    cout<<s2<<"\n";
}

int main()
{
    int mat[4][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16}};
    //int mat[4][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12}};
    sum1(mat,4,4);
    sum2(mat,4,4);

    return 0;
}
// 1 2 3 4
// 5 6 7 8
// 91011 12