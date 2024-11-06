#include <iostream>
using namespace std;

int countZeros(int n, int count)
{
    cout<<"value of count is "<<count<<endl;
    // run this to see value of count
    if (n == 0)
    {
        return count;
    }
    if (n % 10 == 0)
        return countZeros(n / 10, count + 1);
    return countZeros(n / 10, count);
}
// we need a helper function because the value we want is returned by the
// last recursive call and to store it we here are using helper function lastValue
int lastValue(int n)
{
    return countZeros(n, 0);
}
int main()
{
    cout << "enter the number-->" << endl;
    long unsigned int num;
    cin >> num;
    cout << "the number of zeros are " << lastValue(num) << endl;
    return 0;
}