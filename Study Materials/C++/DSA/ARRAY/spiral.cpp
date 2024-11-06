#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter number of rows and columns: \n";
    cin>>r>>c;
    // taking 2-D input
    // cout<<"Enter the number of rows and columns of the matrix --> \n";
    // int r = 3,c = 3; //cin >> r >> c;
    // int mat[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0; i<r; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         cin>>mat[i][j];
    //     }
    // }
    // incase the input buffer arises ** it was needed here **
    cin.sync();
    int mat[r][c];


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout << endl;
    }
    int i,top=0,bot=r-1,left=0,right=c-1;
    int dir=0;
    
    while(top<bot && left<=right)
    {
        if(dir==0)
        {
            for(i=left; i<=right; i++) cout<<mat[top][i];
            top++;
        }
        else if (dir==1)
        {
            for(i=top; i<=bot; i++) cout<<mat[i][right];
            right--;
        }
        else if (dir==2)
        {
            for(i=right; i>=left; i--) cout<<mat[bot][i];
            bot--;
        }
        else if (dir==3)
        {
            for(i=bot; i>=top; i--) cout<<mat[i][left];
            left++;
        }
        dir=(dir+1)%4;
    }
}

1 1 2 3
2 4 5 6
3 7 8 9

