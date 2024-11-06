// in normal pattern matching algorithms we waste time by compairing elements repeadtedly in the given string once tested
//to prevent this we use KMP algorithm
//this converts complexity from m*n to m+n

#include<iostream>
#include<vector>
using namespace std;
vector<int> prefix_function(string s)
{
    int n=s.size();
    vector<int> pi(n,0);
    for(int i=1;i<n;i++)
    {
        int j=pi[i-1];
        while(j>0 and s[i]!=s[j])
            j=pi[j-1];
        if(s[i]==s[j])
            j++;
        pi[i]=j;
    }
    //time complexity of this function is O(n). 
    //that too being two loops.
    return pi;
}
int main()
{
    string s= "y ne";
    string t="my new string";
    vector<int> prefix =prefix_function(s);
    for(auto i : prefix)
        cout<<i<<" ";
    int i(0),j(0),pos(-1);
    while (i<t.size())
    {
        if(t[i]==s[j])
        {
            j++;
            i++;
        }
        else{
            if(j!=0)
                j=prefix[j-1];
            else
                i++;
        }
        if(j==s.size())
        {
            pos=i-s.size();
            break;
        }
    }
    cout<<"position is -->"<<endl;
    cout<<pos<<endl;
}
