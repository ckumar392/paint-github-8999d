//leetCode 1342
#include<iostream>
using namespace std;

int countS2(int n)
{
	if(n<=1) return 1;
	return countS2(n-1)+countS2(n-2);
}
//using dp

int counter(int n)
{
	vector<int> dp(n+1);
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int countSteps(int num,int count)
{
	// cout<<"value of count here is --> "<<count<<endl;
	if(num<=0) return count;
	if(num%2==0)
		return countSteps(num/2,count+1); 
	else return countSteps(num-1,count+1);
}
int helper(int num)
{
	return countSteps(num,0);
}

int main()
{
	cout<<"Enter the number --> "<<endl;
	int num; cin>>num;
    // cout<<"number of steps requires is --> "<<countSteps(num,0)<<endl;
    cout<<"number of steps requires is --> "<<helper(num)<<endl;
    cout<<"number of steps requires is --> "<<countS2(num)<<endl;
    cout<<"number of steps requires is --> "<<counter(num)<<endl;


	// cout<<"number of steps required is --> "<<countSteps(num)<<endl;
	return 0;
}