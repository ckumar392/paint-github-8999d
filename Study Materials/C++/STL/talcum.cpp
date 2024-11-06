#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<int,int> map1;
    map<string,int> map2;
    map1.insert(pair<int,int>(11,22));
    map1.insert(pair<int,int>(12,42));
    map1.insert(pair<int,int>(13,32));
    map2.insert(make_pair("hello",32));
    map<int, int>::iterator itr;
    itr=map1.begin();
    while(itr!=map1.end()){
        cout<<itr->first<<" "<<itr->second<<endl;
        itr++;
    }
    return 0;
}