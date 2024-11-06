#include<iostream>
using namespace std;

bool pal1(string s,int i,int n)
{
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return pal1(s,i+1,n);
}
bool pal2(string s,int i,int n)
{
    if(i>=s.length()/2) return true;
    if(s[i]!=s[n-1]) return false;
    return pal2(s,i+1,n-1);
}
int main()
{
    string str="madam";
    if(pal2(str,0,str.length())) cout<<"Plaindrome!!"<<endl;
    else cout<<"NOT Palindrome!!"<<endl;

    return 0;
} 