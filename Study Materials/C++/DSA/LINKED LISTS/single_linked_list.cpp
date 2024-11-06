#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        this ->data = val; //here "this" is not compulsary
        this->next = NULL;
    }
};
void insertAtTail(node* &head, int val){ //here head is passed by reference because we have to change the original linked list
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp=head; 
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){       
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node* head){ //here we have passed by value so we could also have used head as a pointer to traverse and it would not change the original head
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;

}

void del(node* head,int value){
    node* temp = head;
    // if(value==head->data)
    // {
    //     head = head->next;
    //     delete temp;
    //     return;
    // }
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* del_data=temp->next;
    temp->next=temp->next->next;
    delete del_data;

}
void delete_at_end(node* &head)
{
    node* temp = head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node* todel = temp->next;
    temp->next=NULL;
    free(todel);

}
void del_head(node* head)
{
    node* temp = head;
    temp = head;    //backup the head to free its memory
    head = head->next;
    free(temp);
    temp=NULL;
}
 
int leng(node* temp)
{
    if(!temp) return 0;
    else return 1+leng(temp->next);
}
void printRev(node* head)
{
    int len=leng(head);
    node* temp=head;
    for(int i=0;i<len;i++)
    {
        cout<<"\r"<<temp->data;
        temp=temp->next;
    }
}
node* reverse(node* head){
    if(head == NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node*nxt;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;

}
void rev( node* &head)
{
    // 1 2 3 4 5 6
    node* prev=NULL,*nex,*curr=head;
    while(curr!=NULL)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    head=prev;
}

int main()
{

    node* head =NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    cout<<"length of the list is --> "<<leng(head)<<endl;
    display(head);
    // insertAtHead(head,0);
    // display(head);
    // // cout<<search(head,99)<<endl;
    // del(head,3);
    // // display(head);
    // del(head,5);
    // del(head,4);
    // display(head);
    // del_head(head);
    rev(head);
    display(head);
    // cout<<sizeof(head)/sizeof(head->data);
    return 0;  
}
 