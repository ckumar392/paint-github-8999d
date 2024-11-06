#include<iostream>
using namespace std;
int sum=0;
bool palindrome(int x)
{
    if(x==sum) return true;
    else return false;
}

void reverse(int num)
{
    if (num == 0)
        return;
    sum = sum*10+num%10;
    reverse(num / 10);
}
int main()
{
    cout<<"enter the number-->"<<endl;
    int num; cin>>num;
    reverse(num);
    cout<<"the reversed number is "<<sum<<endl;
    if(palindrome(num)) cout<<"the number is plaindrome"<<endl;
    else cout<<"NOT palindrome!!"<<endl;
    return 0;
}