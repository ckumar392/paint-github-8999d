#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(40);
    st.push(30);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.push(30);
    st.push(50);
    //printing the stack
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();  
    }


 
    
}