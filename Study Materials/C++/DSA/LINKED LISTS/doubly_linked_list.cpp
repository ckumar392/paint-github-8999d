#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
};

void add_prev(node* & head,int value)
{
    if(head==NULL)
    {
        cout<<"ERROR: Invalid";
    }
    node* h2 = new node;
    h2->data=value;
    h2->next=head;
    h2->prev=NULL;
   // if()
    head=h2;
}
void add_last(node* & head,int value)
{
    if(head==NULL)
    {
        cout<<"ERROR: Invalid";
    }
    node* h2 = new node;
    h2->data=value;
    node* temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=h2;
    h2->prev=temp;
    h2->next=NULL;
}
void print(node* head)
{
    node* temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    head = new node;
    add_prev(head,2);
    add_prev(head,3);
    print(head);
}