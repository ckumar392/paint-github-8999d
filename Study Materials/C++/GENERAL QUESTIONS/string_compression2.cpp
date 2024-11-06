#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
string comp(string s1)
{
    string ans;
    map<char,int> mp;
    for(auto x : s1)
        mp[x]++;
    for(int i=0;i<=s1.length();)
    {
        char c=s1[i];
        if(mp.find(s1[i])!=mp.end())
        {
            ans+=c;
            if(mp[c]!=1) ans+=to_string(mp[c]);
            i+=mp[c];
            mp.erase(c);
        }
        else    i++;
    }    
    return ans;
}
int main()
{
    cout<<"Enter the string -->\t";
    string s1;
    cin>>s1;
    cout<<"The given string is -->\t"<<s1<<endl;
    string ans=comp(s1);
    cout<<"The compressed string is -->\t";
    cout<<ans;
    return 0;
}