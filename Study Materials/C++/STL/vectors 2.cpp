#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main(){
    pair<vector<int>::iterator, vector<int>::iterator> mnmx;
    int arr[]= {2,1,3,4,8,6,7,8,9,1000};
    vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
    display(v);
    sort(v.begin(),v.end());
    display(v);
    reverse(v.begin(),v.end()) ;
    display(v);
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.end())<<endl;
    mnmx=minmax_element(v.begin(),v.end());
    cout << mnmx.first - v.begin()<< endl;//returns the minimum element
    cout << mnmx.second - v.begin()<< endl;//returns the maximum element
    //cout<<accumulate((v.begin(),v.end(),0))<<endl; // dont know why but it doesnt work for a reason
    cout<<count(v.begin(),v.end(),8)<<endl;
    sort(v.begin(),v.end());
    cout<<binary_search(v.begin(),v.end(),6)<<endl;//returns true if element is present
    //cout<<find(v.begin(),v.end());
    //lower_bound(v.begin(),v.end(),x)
    //cout<<distance(v.begin(),4)<<endl;
  return 0;
}