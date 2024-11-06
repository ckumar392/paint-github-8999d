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
        while(k != 2*i-1)
        {
            cout<<factorial(i)/(factorial(k)*factorial(i-k))<<" ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}