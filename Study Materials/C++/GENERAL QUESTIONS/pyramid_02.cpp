
#include <iostream>
using namespace std;

int main()
{
    int s, n,i,j,k;

    cout <<"Enter number of rows: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        int coef=1;
        for(k=n-i;k>0;k--) cout<<" ";
        for(int j=1; j<=i; ++j) cout<<"* ";
        
        cout << endl;
    }    
    return 0;
}