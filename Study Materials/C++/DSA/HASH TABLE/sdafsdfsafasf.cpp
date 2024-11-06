#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    if(-1) cout<<"i was wrong"<<endl;
    string s = "b", t = "c";
    int count = 0;
    int index=t.find(s[0]);
    cout<<"index = "<<index<<endl;
    if(index!=-1 || s[0]==t[0]) count++;
    cout<<"initial count = "<<count<<"\tfound at "<<index<<endl;
    for(int i=1;i<s.length();i++)
    {
        index=t.find(s[i],index+1);   
        if(index!=-1) count++;
        cout<<"temp count = "<<count<<"\tfound at "<<index<<endl;
    }
    cout<<"count = "<<count<<endl;
    if(count==s.length()) return true;
}