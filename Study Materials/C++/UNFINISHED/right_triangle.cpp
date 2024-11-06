#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int j,i, rows,k;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; ++i)
    {
        for(j = 1; j <= rows-i; ++j) cout <<"  ";          
        int k=0;
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }    
    return 0;
}