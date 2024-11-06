//finds occurences at multiple indexes
//uses hashing 
#include<iostream>
using namespace std;
const int N=1e5+7,m=1e9+7;
int p=31;
vector<long long> power(N);

int32_t main()
{
    string s= "new";
    string t="mynewstringnew also this is my new and new new string found in a new box";
    int T=t.size(),S=s.size();
    vector<long long> h(T+1,0);
    power[0]=1;
    for(int i=1;i<N;i++)
    {
        power[i]=(power[i-1]*p)%m;
    }
    for(int i=0;i<T;i++)
    {
        h[i+1]=(h[i]+(t[i]-'a'+1)* power[i])%m;

    }
    long long h_s=0;
    for(int i=0;i<S;i++)
    {
        h_s=(h_s+(s[i]-'a'+1)* power[i])%m;
    }
    for(int i=0;i+S-1<T;i++)
    {
        
        long long curr_h=(h[i+S]-h[i]+m)%m;
        if(curr_h==(h_s*power[i])%m)
        {
            cout<<"Found at index "<<i<<endl;
        }
    }


}