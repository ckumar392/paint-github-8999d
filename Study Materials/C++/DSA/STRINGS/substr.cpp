#include<iostream>
using namespace std;
//main_string.substr(start_position, length_of_s2);
//this returns string
int main()
{
    string s1="newi wen have got a new idea involving new concepts ";
    string s2="new";
    int ns1=s1.size(),ns2=s2.size();
    for(int i=0;i<ns1-ns2+1;i++)
        if(s1.substr(i,ns2)== s2)
            cout<<"found at "<<i<<endl;
}