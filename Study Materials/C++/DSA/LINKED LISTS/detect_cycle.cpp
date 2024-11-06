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

node* insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){       
        head = n;
        return head;
    }
    n->next = head;
    head = n;
    return head;
}

void display(node* head){ //here we have passed by value so we could also have used head as a pointer to traverse and it would not change the orignal head
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

bool detect_cycle(node* head){
    if(head == NULL){
        return true;
    }
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main()
{
    node* head = NULL;
    insertAtHead(head,4);
    node* node2=insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    head->next->next->next=head->next;
    //display(head);
    cout<<detect_cycle(head)<<endl;
    return 0;  
}