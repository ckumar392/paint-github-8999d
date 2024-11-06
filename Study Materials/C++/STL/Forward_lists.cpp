#include<iostream>
using namespace std;
#include <forward_list>
#define nl cout<<endl;
int main()
{
    forward_list<int> l1;
    l1.push_front(32);
    //l1.push_back(1); no push_back in forward list
    l1.push_front(2);
    l1.push_front(2);
    l1.push_front(92);
    l1.insert_after(l1.begin(),132);
    l1.remove(2);
    for(auto it=l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    nl
    forward_list<int> l2;
    l2.assign(5,100);
    for(auto it=l2.begin(); it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }
    nl
    auto it2 = l2.begin();
    nl
    l1.merge(l2);
    l1.reverse();
    l1.sort(); 
    
    return 0;   
}