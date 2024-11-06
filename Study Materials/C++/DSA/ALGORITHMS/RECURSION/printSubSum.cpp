#include<iostream>
#include<vector>
using namespace std;
//print the subsequence if the sum is same as desired
void printSub(vector<int> v1,int sum,int psum,vector<int> v2,int idx,int n)
{
    if(idx==v1.size())
    {
        if(psum==sum)
        {
            for(auto x : v2) cout<<x<<" ";
            cout<<endl;
        }
        return;
    }  
    v2.push_back(v1[idx]);
    psum+=v1[idx];
    printSub(v1,sum,psum,v2,idx+1,n);
    psum-=v1[idx];
    v2.pop_back();
    printSub(v1,sum,psum,v2,idx+1,n);
}
int main()
{
    vector<int> v1{3,4,5,1,2,7,4,8},v2;
    int sum=8;
    cout<<"\nThe subsequence of the desired sum is --> \n"<<endl;
    printSub(v1,sum,0,v2,0,v1.size());
    return 0;
}
