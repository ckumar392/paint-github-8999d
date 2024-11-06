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
    int coef=1;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; ++i)
    {
        for(j = 1; j <= rows-i; ++j) cout <<"  ";          
        int k=0;
        for(j=0;j<=i;j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    
    }    
    return 0;

}