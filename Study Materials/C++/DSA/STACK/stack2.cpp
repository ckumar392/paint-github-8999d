#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int sum(){
    cout<<"sum"<<endl;
}
void sol( vector<char> &str)
{
    stack<char> st;
    for(auto x: str)
    {
        st.push(x);
    }
    for(auto x=0;x<str.size();x++)
    {
        char curr=st.top();
        str[x]=st.top();
        st.pop();
    }
}

int main()
{
    char arr[]= {'h','e','l','l','o'};
    vector<char> sentence(arr,arr+sizeof(arr)/sizeof(arr[0]));
    sum();
    sol(sentence);
    sum();
    for(auto x: sentence)
    {
        cout<<x<<" ";
    }
    return 0;
}