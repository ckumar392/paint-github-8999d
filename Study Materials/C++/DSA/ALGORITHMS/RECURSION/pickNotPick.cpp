#include<iostream>
#include<vector>
using namespace std;

void fun(int ind,vector<int> &dp,vector<int> v1,int n ) 
{
    if(ind==n)
    {
        for(auto it:dp)
            cout<<it<<" ";
        if(dp.size()==0)
            cout<<"empty **also part of the subsequence";
        cout<<endl;
        return;
    }
    //1 2 3
    dp.push_back(v1[ind]); //pick
    fun(ind+1,dp,v1,n);
    dp.pop_back();  //dont pick
    fun(ind+1,dp,v1,n);
}
int main()
{
    vector<int> v1{1,2,3};
    int n=v1.size();
    vector<int> dp;
    fun(0,dp,v1,n);
    return 0;
}