//used to store in a sorted form
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int arr[]= {1,222,3,90,22,22,22,100,100};
    set<int> st(arr,arr+sizeof(arr)/sizeof(arr[0]));
    for(auto i : st)
    {
        cout<<i<<endl;
    }
    string str = "hello there i am chandan";
    set<char> st1(begin(str),end(str));
    for(auto i : st1)
    {
        cout<<i<<endl;
    }
}
