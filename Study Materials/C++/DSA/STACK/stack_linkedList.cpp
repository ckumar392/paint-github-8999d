#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int val)
	{
		data=val;
		next=NULL;
	}
};

class stack{
public:

	node* head=NULL;

	bool isEmpty(){
		if(head==NULL) return true;
        return false;
	}

	void push(int data){
		node* temp= new node(data);
		if(isEmpty())
		{
			head=temp;
			return;
		}
		temp->next=head;
		head=temp;
	}

	void pop()
	{
	
		if(!head) cout<<"NO DATA"<<endl;
		else{
			node*temp= head;
        	head=head->next;
        	delete temp;
		}   
	}

    int peak()
    {
        if(isEmpty()){
            cout<<"Stack is empty!!"<<endl;
        }
        return head->data;
    }
};

int main()
{
	stack s ;
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
        	cout<<s.peak()<<endl;
        	s.pop();
    		}	
			break;
		}

	}
    

	return 0;
}

// 1 2 3 4 