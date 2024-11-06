#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    cout << n;
    print(n - 1);
    // cout<<n;
}

int main()
{
    cout << "Enter the number-->";
    int num;
    cin >> num;

    print(num);
    return 0;
}