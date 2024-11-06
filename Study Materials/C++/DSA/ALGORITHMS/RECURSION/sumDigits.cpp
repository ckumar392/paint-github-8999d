#include <iostream>
using namespace std;

int sumDigits(int num)
{
    if (num <= 0)
        return 0;
    return num % 10 + sumDigits(num / 10);
}

int prodDigits(int num)
{
    if (num <= 0)
        return 1;
    return num % 10 * prodDigits(num / 10);
}
int sum(int n)
{
    if(n<=1) return 1;
    return n+sum(n-1);
}
void reverse(int num)
{
    if (num <= 0)
        return;
    cout << num % 10;
    reverse(num / 10);
}
int main()
{
    int n;
    cout << "Enter the number-->" << endl;
    cin >> n;
    cout << sumDigits(n) << endl;
    cout << prodDigits(n) << endl;
    cout << "reverse is --> ";
    reverse(n);
    return 0;
}