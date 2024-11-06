#include<iostream>
#include<stack>
using namespace std;
void delMid(stack<int> &st,int size)
{
    if(st.size() == size/2)
    {
        st.pop();
        return;
    }
    int attop=st.top();
    st.pop();
    delMid(st,size);
    st.push(attop);
}
int main()
{
    int size;
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(0);
    // 0 1 2 3 4 5 
    size=st.size();
    delMid(st,size);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}