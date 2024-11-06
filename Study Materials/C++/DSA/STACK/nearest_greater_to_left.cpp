#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//1 3 2 4 

void nextGreater(stack<int> st, vector<int> vt)
{
    vector<int> ans;
    int i, j, k;
    for(i=1 ;i<st.size()-1;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(vt[j]>=vt[i])
            {
                ans.push_back(vt[j]);
                break;
            }
        }
    }

    for(auto x : ans) cout<<x<<" ";
}

int main()
{
    stack<int> st;
    int arr[] = {1,3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    for (int x : vec) cout << x << " ";
    cout<<"\n";
    nextGreater(st,vec);
    return 0;
}