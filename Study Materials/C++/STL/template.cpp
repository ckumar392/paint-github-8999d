#include<iostream>
using namespace std;

#define nl cout<<endl;
template<typename T>

T my_max(T x,T y)
{
    return (x>y) ? x : y;
}

template<typename S>
S search(S arr[],S y ,S key)
{
    for(int i = 0; i<y ;i++)
    {
        if (arr[i]==key)
        return i+1 ;
    }
}

int main()
{
    int a[5]={1,2 ,3 ,4 ,5};
    cout<<my_max<string>("fg","j");nl
    cout<<search<int>(a,5,4); //S is replaced by int
    return 0;
};