#include<iostream>
#include<stack>

using namespace std;

void push_at_bottom(stack<int> &st  , int val)
{
    if(!st.size()){
        st.push(val);
        return;
    }
    int top1 = st.top();
    st.pop();
    push_at_bottom(st, val);
    st.push(top1);
}

void revst(stack<int> &stack)
{
    if(stack.empty()) return;

    int above = stack.top();
    stack.pop();
    revst(stack);
    push_at_bottom(stack, above);
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    push_at_bottom(st,500);
    st.push(2);
    st.push(1);
    revst(st);
    while(st.size())
    {
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}