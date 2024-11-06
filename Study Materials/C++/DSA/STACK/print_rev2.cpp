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
        else return false;
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
		if(isEmpty())
		{
			cout<<"Stack is isEmpty!!"<<endl;
			return;
		}
		head=head->next;
	}

    int peak()
    {
        if(isEmpty()){
            cout<<"Stack is empty!!"<<endl;
        }
        return head->data;
    }
};

void print_in_rev(string str , stack &st)
{
    for(auto x : str)
    {
        st.push(x);
    }
}
int main()
{
	stack s ;
    // s.pop();
    // s.push(1);
    // s.push(2);
    // s.push(3);
    print_in_rev("hello there",s);
    while(!s.isEmpty())
    {
        cout<<char(s.peak())<<endl;
        s.pop();
    }

	return 0;
}