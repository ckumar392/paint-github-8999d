#include <iostream>
using namespace std;

void sum1(int num[5], int target)
{
    for (int i = 0; i <4; i++)
    {
        for (int j = i + 1; j <4; j++)
        {

            if (target==num[i] + num[j] )
            { 
                cout<<"value of i "<<i<< "\nvalue of j is "<<j;
            }
        }
    }
}
int main()
{
    int num[] = {1, 7, 2, 15};
    //int target = 9;
    sum1(num,9);
}