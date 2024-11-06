#include <iostream>
using namespace std;

int tiling(int n)
{ // 2*n
    if (n == 0 || n == 1)
        return 1;
    // choice -> vertical first
    int w1 = tiling(n - 1);
    // choice -> horizontal first
    int w2 = tiling(n - 2);

    return w1 + w2;
}

int main()
{
    int test = 4;
    cout << "Tiling test " << tiling(test) << endl;
    return 0;
}