#include<iostream>
using namespace std;

void search1(int a[3][3],int r,int c ) //brute force
{
    //in this search method we will be looking from 
    cout<<a[0][0]<<" "<<a[1];
}

int search2(int a[4][4],int k ) // staircase search
{
    int pr=0,pc=3;
    while(pr<=3 && pc>=0)
    {
        if(k==a[pr][pc]) 
        { 
            cout<<"found at row = "<<pr+1<<" column ="<<pc+1;
            return 0;
        }
        else if(k>a[pr][pc]) pr++;
        else pc--;
    }
    cout<<"Element not available in the matrix"<<endl;
}

int main()
{
    int mat[4][4] = { {10,20,30,40}, {15,25,35,45},{27,29,37,48},{32,33,39,50}};
    ///cout<<"enter the number to be searched"<<endl;
    //int find; cin>>find;
    //search2(mat,find);
    int size= sizeof(mat[0]);
    cout<<size<<endl;
    return 0;
}