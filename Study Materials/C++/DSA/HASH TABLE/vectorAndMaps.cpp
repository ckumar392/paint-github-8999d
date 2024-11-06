#include <iostream>
#include<map>
#include<vector>

using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> vec(arr,arr+size);
    map<int ,int> mp;
    for(int i=0;i<size;i++)
        mp[vec[i]]++;
    for(auto x:mp) cout<<x.first<<" --> "<<x.second<<endl;
    for(auto x:mp)
    {
        if(x.second!=1) cout<<x.first;
    }
}