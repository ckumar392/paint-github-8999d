#include<iostream>
using namespace std;

void dikha(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}
int main()
{
    string s1="aaabbcccdffff";
    cout<<"the given string is \n"<<endl;
    dikha(s1);
    cout<<endl;
    string s2;
    int count=1;
    // s2=s2+"a";
    // s2.pop_back();
    //s2 --> a 1 
    for(int i=0; i<s1.length(); i++)
    {
        count=1;
        while(s1[i]==s1[i+1] && i<s1.length()-1)
        {
            count++;
            i++;
        }
        s2=s2+s1[i];
        if(count>=1) s2+=to_string(count);
    }

    dikha(s2);
    // string s3="afisdf";
    // dikha(s3);
    cout<<"\ncount: "<<count<<endl;
    return 0;
}