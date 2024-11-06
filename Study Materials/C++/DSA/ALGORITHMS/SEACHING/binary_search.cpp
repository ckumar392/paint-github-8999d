#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
void display (vector<int> v)
{
    for(auto &x :v)
        cout<<x<<" ";
}
void binary_search(vector<int> v, int key)
{
    int n=v.size();
    int s=0,e=n-1;
    int mid=(s+e)/2;
    while(s<e)
    {
        mid=(s+e)/2;
        if(v[mid]==key)
        {
            cout<<"\nfound at "<<mid+1<<endl;
            return;
        }
        else if(key<v[mid]) e=mid-1;
        else s=mid+1;
    }
    cout<<"\nSorry couldn't find\n";
}
int main()
{
    cout<<"Enter the size of the list :\t";
    int n; cin>>n;
    vector<int> v1;
    cout<<"\nEnter the elements :\n"<<endl;
    for(auto i=0;i<n;i++)
    {
        int data; cin>>data;
        v1.push_back(data);
    }
    cout<<"\nEnter the element to be searched :\n"<<endl;
    int key; cin>>key;
    display(v1);
    binary_search(v1,key);
    return 0;
}