#include<iostream>
#include<list>

using namespace std;
#define nl cout<<endl;
void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout << *it; 
    }
}

int main()
{
    list<int> lst;
    lst.insert(lst.begin(),34);
    lst.insert(lst.begin(),45);
    lst.insert(lst.begin(),55);
    display(lst);nl
    auto it1 = lst.begin();
    //*it++;
    cout<<lst.front()<<" "<<lst.back()<<endl;
    list<int> l1; //list of 0 length
    
    l1.push_back(1); //adding 1 at last
    l1.push_front(3);
    l1.push_front(7);
    l1.push_front(9);

    //removing
    l1.pop_back(); //removing

    //creating a iterator
    list<int> :: iterator it;
    
    display(l1);
    nl
    list<int> l2; //list of size 7 but empty
    l2.insert(l2.begin(),69);
    list<int> :: iterator it2;
    it2=l2.begin();
    
    display(l2);
    nl
    // sorting the list in ascending order
    l1.sort();
    display(l1);
    nl
    //sort(l1.begin(), l1.end(), greater<int>());
    l1.sort(greater<int>());
    //merging the list
  l1.merge(lst);
  l1.remove(3);
  //reversing a list 
  l1.reverse();
  display(l1);
  nl
  return 0;
}

