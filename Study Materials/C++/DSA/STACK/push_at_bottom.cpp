#include<iostream>
#include<stack>
#define MAX = 2
using namespace std;

void push_at_bottom(stack<int> &s,int val){
    //cout<<"push_at_bottom called with "<<val<<endl;
    if(!s.size()){
        s.push(val);
        return;
    }
    int data=s.top();
    s.pop();
    push_at_bottom(s,val);
    s.push(data);
}
int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
 
    push_at_bottom(st,6);
    while(st.size())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}