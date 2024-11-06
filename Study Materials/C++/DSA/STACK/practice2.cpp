#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }

};
class stack{
public:

    node *head=NULL;
    int top;
    void push(int data)
    {
        node* temp=new node(data);
        if(!head) temp=head;
        else 
        temp->next=head;
        head=temp;
    }
    void pop()
    {
        if(head) 
        {
            node*temp= head;
            head=head->next;
            delete temp;
        }
        cout<<"NO DATA"<<endl;
    }

    void peak()
    {
        if(head!=NULL) cout<<head->data<<endl;
        else cout<<"NO DATA"<<endl;
    }
    bool isEmpty()
    {
        if(!head) return true;
        else 
        return false;
    }
};
int main()
{
    stack s;
    while(true)
    {
        cout<<"Enter the desired option -:\n1. push data\n2.pop data\n3.print stack\n4. check if empty"<<endl;
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
        if(n==4)
            {
                if(s.isEmpty()) cout<<"\nYES its empty\n"<<endl;
                else cout<<"\nNO you got something in it\n"<<endl;
            }
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
            

		}
    }
    return 0;
}