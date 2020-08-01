#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void insertAtHead(node*&head, int data){
    node*n=new node(data);
    n->next=head;
    head=n;
}

node* findMid(node*head){
    if(head == NULL && head->next == NULL){
        return head;
    }
    node*slow=head;
    node*fast=head->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

void print(node*head){
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

int main() {
    node*head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print(head);
    cout<<endl;
    node*m = findMid(head);
    cout<<m->data;
    return 0;
}
