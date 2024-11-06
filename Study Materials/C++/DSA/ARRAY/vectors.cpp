#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

void display(const vector<int> vec) //const ensures that original vector is not modified accidently
{ 
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void passing_vector_by_reference(vector<int> &vect)
{
    vect[0]=0;
}
int main(){
    
    int arr[]= {2,1,3,4,8,6,7,8,9,1000};
    vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
 
    cout<<"size of vector is "<<v.size()<<endl;
    v.pop_back(); //removes the last element
    cout<<v.front()<<endl; //returns the first element
    cout<<v.back()<<endl; // returns the last element
    display(v);
    v.erase(v.begin());
    display(v);
    v.erase(v.begin(),v.begin()+5);
    //v.clear(); //erase the data
    passing_vector_by_reference(v);
    display(v);
    // insert functions insert by shifting

    v.insert(v.begin()+2,69);
    //inserting 5 6 times
    v.insert(v.begin()+3,6,5); 
    vector<int> v2;
    //inserting elements from another container
    v2.insert(v2.begin(),v.begin(),v.begin()+3);
    display(v2);x3

    //sorting vectors 
    sort(v.begin(),v.end());
    // display(v);
    // reverse(v.begin(),v.end()) ;
    // display(v);
    // cout<<*max_element(v.begin(),v.end())<<endl;
    // cout<<*min_element(v.begin(),v.end())<<endl;
    // mnmx=minmax_element(v.begin(),v.end());
    // cout << mnmx.first - v.begin()<< endl;//returns the minimum element
    // cout << mnmx.second - v.begin()<< endl;//returns the maximum element
    //cout<<accumulate((v.begin(),v.end(),0))<<endl; // dont know why but it doesnt work for a reason
    // cout<<count(v.begin(),v.end(),8)<<endl;
    // sort(v.begin(),v.end());
    // cout<<binary_search(v.begin(),v.end(),6)<<endl;//returns true if element is present
    //cout<<find(v.begin(),v.end());
    //lower_bound(v.begin(),v.end(),x)
    //cout<<distance(v.begin(),4)<<endl;
    // pair<vector<int>::iterator, vector<int>::iterator> mnmx;
  return 0;
}