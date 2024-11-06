#include <iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int num[] = {1,3,5,4,2,2,1,4,5,5,5,4};
    int n=sizeof(num)/sizeof(num[0]);
    vector<int> v1;
    map<int ,int> mapp;
    for(auto i=0;i<n;i++)
        mapp[num[i]]++;
    // for(int i=0;i<n;i++)
    // cout<<num[i]<<" --> "<<mapp[num[i]]<<endl;
    map<int,int> :: iterator it;
    for(it=mapp.begin();it!=mapp.end();it++)
        cout<<it->first<<" --> "<<it->second<<endl;

}