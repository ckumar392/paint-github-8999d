#include <iostream>
using namespace std;

int main()
{
    int s, rows,k;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(s = 1; s <= rows-i; ++s) cout <<"  ";
        int k=0;
        while(k != 2*i-1)
        {
            cout <<"* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}