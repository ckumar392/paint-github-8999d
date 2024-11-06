#include <iostream>
using namespace std;

int sum_nat(int n)
{
    if (n <= 1)
        return 1;
    return n + sum_nat(n - 1);
}
void add(int num,int s)
{
    if(n<1)
    {
        cout<<s;
        return;
    }
    add(num-1;s+num);
}
int main()
{
    cout << "enter the number-->\n"
         << endl;
    int n;
    cin >> n;
    cout << sum_nat(n);
    return 0;
}