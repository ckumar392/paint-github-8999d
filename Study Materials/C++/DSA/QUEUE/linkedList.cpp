#include <iostream>
using namespace std;
class node
{
    public:
    node* next;
    int data;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class queue
{
    public:
    int data;
    node* front, *rear;
    queue()
    {
        front=rear=NULL;
    }
    void push(int data)
    {
        node* temp= new node(data);
        if(rear==NULL)
        {
            front=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
    void pop()
    {
        if(front==NULL) cout<<"no data"<<endl;
        else
        {
            node* temp=front;
            front=front->next;
            delete temp;
        } 
    }
    void display()
    {
        node* temp=front;
        while(temp!=NULL)
        {
            cout<<"\nelement is --> "<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void fro()
    {
        if(rear=NULL) cout<<"NO DATA"<<endl;
        else
        {
            cout<<"\nThe data is --> "<<front->data;
        }
    }
};

int main()
{
    queue q1;
    q1.push(100);
    q1.push(2);
    q1.push(9);
    q1.push(230);
    cout<<"works till here"<<endl;
    q1.fro();
    q1.pop();
    q1.fro();

    q1.display();
    return 0;
}