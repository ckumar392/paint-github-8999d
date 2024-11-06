#include<iostream>
using namespace std;
class stack{
public:
    int *arr;
    int size;
    int top;
    stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data)
    {
        if(size-top>=1)
        {
            top++;
            arr[top]=data;
        }
        else cout<<"Stack Overflow"<<endl;
    }
    void pop()
    {
        if(top==-1) cout<<"Stack Underflow"<<endl;
        else top--;
    }

    void peak()
    {
        if(top==-1) cout<<"NO DATA YET!!"<<endl;
        else cout<<arr[top];
    }
    bool isEmpty()
    {
        if(top==-1) return true;
        return false;
    }
};
int main()
{
    stack s(3);
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
                cout<<"the desired data is :"<<endl;
        	    s.peak();
        	    s.pop();
                cout<<"\n";
    		}	
			break;
		}
    }
    return 0;
}