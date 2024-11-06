#include<iostream>
using namespace std;
int rev(int num)
{
    static int ans=0;
    int rem;
    if(num==0)
        return 0;
    rem=num%10;
    ans=ans*10+rem;
    rev(num/10);
    return ans;
}
bool palin(int num)
{
    return num==rev(num);
}
bool pal(string s,int i,int n)
{
    // cout<<"s[i] = "<<s[i]<<"\ns[n] = "<<s[n]<<endl;
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return pal(s,i+1,n);
}
int main()
{
    // int num=1221;
    // if(palin(num)) cout<<num<<" Plaindrome hai!!"<<endl;
    // else cout<<num<<"NOT palindrome!!"<<endl;
    string str="RADAR";
    cout<<pal(str,0,str.length()-1)<<endl;
    if(pal(str,0,str.length()-1)) cout<<str<<" Plaindrome hai!!"<<endl;
    else cout<<str<<" NOT palindrome!!"<<endl;

    return 0;
}