#include<iostream>
#include<stack>

using namespace std;

void addBott(stack<int> &st , int val)
{
	if(!st.size()) 
	{
		st.push(val);
		return;
	}
	int atTop=st.top();
	st.pop();
	addBott(st,val);
	st.push(atTop);

}

void revSt(stack<int> &sta)
{
	if(sta.empty()) return;
	int atTop=sta.top();
	sta.pop();
	revSt(sta);
	addBott(sta,atTop);
}


int main()
{
	stack<int> st;

	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	addBott(st,100);
	revSt(st);
	while(st.size())
	{
		cout<<st.top()<<"\n";
		st.pop();
	}
	return 0;
}
