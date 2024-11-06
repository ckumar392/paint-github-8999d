#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
// #include <bits/stdc++.h>

using namespace std;
int p=5; //any value just to make it unique
const int N =1e5+3,m=1e9+7;
vector<long long> powers(N);
long long calculate_hash(string s)
{
    long long hash=0;
    for(int i=0;i<s.size();i++)
    {
        hash=(hash+(s[i]-'a'+1)*powers[i])%m;
        cout<<hash<<endl;
    } 
    return hash;
}
int main()
{
    int distinct=0;
    powers[0]=1; // not started with 0 because it will remain unique for all strings
    //for example a holds value 0 then aa and aaa will also have 0 ;
    for(int i=1;i<N;i++)
    {
        powers[i]=(powers[i-1]*p)%m;
    }
    // char s[]={"aa","ab","aa","ccc","b","bc"};
    vector<string> strings{"aa","b","ffb","bbj","bjb","byty"};
    vector<long long> hashes;
    for(auto r : strings)
    {
        hashes.push_back(calculate_hash(r));
    }

    sort(hashes.begin(),hashes.end());
    for(int i=0;i<hashes.size();i++)
    {
        if(i==0 || hashes[i]!=hashes[i-1])
            distinct++;
    }
    cout<<distinct;
    return 0;
}