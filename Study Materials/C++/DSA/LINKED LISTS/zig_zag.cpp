#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
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

void del_head(node* head)
{
    node* temp = head;
    temp = head;    //backup the head to free its memory
    head = head->next;
    free(temp);
    temp=NULL;
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

node* mid(node* head){
    node* slow= head;
    node* fast= head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next; //slow is increased by one
        fast=fast->next->next; // fast is increased by two
    }
    //return slow->data;
    return slow;
}

void display(node* head){ //here we have passed by value so we could also have used head as a pointer to traverse and it would not change the orignal head
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void zig_zag(node* head)
{
    if(head == NULL || head->next == NULL){
        return;
    }
    node* midnode =mid(head); // isse middle mila
    node* right=reverse(midnode); //isse right part rev hua
    node* left=head;
    node * next_left, *next_right;
    display(right);
    display(left);
    while(left!=NULL && right!=NULL)
    {
        next_left=left->next;
        next_right=right->next;
        left->next=right;
        right->next=next_left;

        left=next_left;
        right=next_right;
    }
}  
int main()
{
    node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);
    zig_zag(head);
    display(head);
    return 0;  
}