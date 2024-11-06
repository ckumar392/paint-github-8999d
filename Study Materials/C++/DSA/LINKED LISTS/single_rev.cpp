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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){       
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node* head){ //here we have passed by value so we could also have used head as a pointer to traverse and it would not change the orignal head
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* head){
    if(head == NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* nxt;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;

}

node *reverse_rec_se(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* head2 = reverse_rec_se(head->next);
    head->next->next=head;
    head->next=NULL;
    return head2;
}

int main()
{
    node* head = NULL;

    insertAtHead(head,0);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    display(head);
    node * reversed = reverse(head);
    display(reversed);
    node * reversed2 = reverse_rec_se(reversed);
    display(reversed2);
    return 0;  
}