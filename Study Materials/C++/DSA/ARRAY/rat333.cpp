#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    string s = "egg",t="add";
    map<string, int> m1;
    map<string, int> m2;
    for(auto i : s)
    {
        m1[i]++;
    }
    return 0;
}