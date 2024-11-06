#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nextGreaterBrute(stack<int> stack, vector<int> vt)
{
    vector<int> ans;
    int i,j,k;

    for(i =0;i<=vt.size()-1;i++)
    {
        // 1  3 2 4 
        for(j=i+1;j<=vt.size();j++)
        {
            if(j>=vt.size()){
                ans.push_back(-1);
                break;
            } 
            if(vt[i]<vt[j]){
                ans.push_back(vt[j]);
                break;
            }

        }
    }
    for(auto x : ans) cout<<x<<" ";
}


void nextGreater(stack<int> st , vector<int> vt)
{
    vector<int> ans;
    int i;
    // 1  3 2 4 
    for(i=vt.size()-1; i>=0; i--)
    {
        if(st.empty()) ans.push_back(-1);
        else if(st.top()>vt[i]) ans.push_back(st.top());

        else if (st.top()<=vt[i])
        {
            while(!st.empty() && st.top()<=vt[i]) st.pop();
            if(st.empty()) ans.push_back(-1); 
            else ans.push_back(st.top());
        }
        st.push(vt[i]);
    }
    for(auto x : ans) cout<<x<<" ";
}

int main()
{
    stack<int> st;
    int arr[] = {1,3,5,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    for (int x : vec) cout << x << " ";
    cout<<"\n";
    nextGreaterBrute(st,vec);
    return 0;
}