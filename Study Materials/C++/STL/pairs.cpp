#include<iostream>
using namespace std;

int main()
{
    pair<string, double> p1("Fuck OFF", 1.23);
    cout << p1.first << " ";
    cout << p1.second << endl;    
    pair<int,int> p2(23,33);
    pair<int,int> p3(2,93);
    p2.swap(p3);
    //array of pair
    pair <int,int> pair_array[5];
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        pair_array[i] = make_pair(a[i],b[i]);
    }
    cout<<pair_array<<endl;
    cout<<pair_array[4].second<<endl;
    cout<<p2.second << " ";
    return 0;
}