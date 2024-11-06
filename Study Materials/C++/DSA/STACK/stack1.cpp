#include<iostream>
using namespace std;

class stack{
	public:
	int *arr;
	int top;
	int size;

	stack(int size)
	{
		this->size=size;
		arr= new int[size];
		top=-1;
	}
	void push(int value)
	{
		if(size-top>=1)
		{
			top++;
			arr[top]=value;
		}
		else{
			cout<<"\nstack overflow!!"<<endl;
		}
	}

	void pop()
	{
		if(top>=0) top--;
		else cout<<"\nstack me data dalo pehle!!"<<endl;
	}
	void peak()
	{
		if(top>=0 && top<=size)
		{
			cout<<"\n"<<arr[top]<<endl;
		}
	}
	bool isEmpty()
	{
		if(top==-1) return true;
		else return false;
	}
};

int main()
{
	cout<<"enter the size of the stack (*this can't be changed later) :\t";
	int n;cin>>n;
	stack s(n);
	while(true)
	{
	cout<<"Enter the desired option -:\n1. push data\n2.pop data\n3.print stack"<<endl;

		int n; 
		cin>>n;
		if(n==1)
		{
			cout<<"Enter the data -:"<<endl;
			int data;cin>>data;
			s.push(data);
		} 
		if(n==2)
			s.pop();
		if(n==3)
		{
			cout<<"Printing the stack -:"<<endl;

			while(!s.isEmpty())
    		{
				s.peak();
        		s.pop();
    		}	
			// break;
		}
		else cout<<"choose a valid option."<<endl;

	}
	return 0;
}