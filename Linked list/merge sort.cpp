// sort an unsorted linked lsit using merge sort
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
void insertAtTail(node*&head, int data){
    if(head == NULL){
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next=new node(data);
    return;
}

void buildList(node*&head){
    int data;
    cin>>data;
    while(data != -1){
        insertAtTail(head,data);
        cin>>data;
    }
}

void print(node*head){
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

istream& operator>>(istream &is, node*&head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &os, node*&head){
    print(head);
    return os;
}
node* findMid(node*&head){
    if(head == NULL && head->next == NULL){
        return head;
    }
    node*slow=head;
    node*fast=head->next;
    while(fast == NULL && fast->next == NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* merge(node*a, node*b){
    if(a== NULL){
        return b;
    }
    if(b == NULL){
        return a;
    }
    node*c;
    //compare a and b for smaller elements.
    if(a->data < b->data){
        c=a;
        c->next = merge(a->next,b);
    }
    else{
        c=b;
        c->next = merge(a,b->next);
    }
    return c;
}
node* mergeSort(node*head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    //1. calculate mid point.
    node*mid = findMid(head);
    node*a = head;
    node*b = mid->next;
    mid->next = NULL; // to divide a linked list into two.

    //2. Recursively sort
    a = mergeSort(a);
    b = mergeSort(b);
    node*c = merge(a,b);
    return c;
}
int main() {
    node*head=NULL;
    cin>>head;
    head = mergeSort(head);
    cout<<head;
    return 0;
}
