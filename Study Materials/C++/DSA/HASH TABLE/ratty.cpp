#include<iostream>
#include<vector>
#include<map>
#include<stack>

using namespace std;

int main()
{
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    stack<char> st;
    for(auto i =0;i<s.size();i++)
    {
        st.push(s[i]);
    }
    while(st.top())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
