#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;
void disp(stack<char> st)
{
    cout<<"Printing the stack"<<endl;
    stack<char> s2 =st;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\t";
        s2.pop();
    }
    cout<<endl;
}
bool isValid(string s) {
        stack<char> st;
        map<char,char> mp;
        mp['(']=')';
        mp['{']='}';
        mp['[']=']';
        for(int i=0;i<s.length();i++)
        {
            cout<<"current character is "<<s[i]<<endl;

            if(st.empty()) st.push(s[i]);
            else
            {
                cout<<"top element "<<st.top()<<endl;
                if(mp[st.top()]==s[i])
                {
                    st.pop();
                    cout<<"poping"<<endl;
                } 
                else
                {
                    cout<<"pushing"<<endl;
                    st.push(s[i]);
                } 
            }
            disp(st);  
        }
        disp(st);  
        if(st.empty()) return true;
        return false;
    }
int main()
{
    string s = "(]";
    isValid(s);
    // for(auto x:mp)
    //     cout<<x.first<<" "<<x.second;
    return 0;
}