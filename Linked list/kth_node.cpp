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
    node*fast=head->next;
    node*slow=head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* fromTheEnd(node*head, int k){
    node*fast=head;
    node*slow=head;
    for(int i=1; i<k; i++){
        if(head == NULL){
            return head;
        }
        fast=fast->next;
    }
    while(fast != NULL && fast->next != NULL){
        fast=fast->next;
        slow=slow->next;
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
    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print(head);
    cout<<endl;
    node*m = findMid(head);
    cout<<"The middle element is: "<<m->data;
    cout<<endl;
    node*f = fromTheEnd(head,3);
    cout<<"Kth element from the end: "<<f->data;
    return 0;
}
