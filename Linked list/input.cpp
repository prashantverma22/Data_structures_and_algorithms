#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next; // pointer to the next node.

    // constructor for the node.
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtTail(node*&head, int data)
{
    if(head == NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void buildList(node*&head)
{
    int data;
    cin>>data;

    while(data != -1){
        insertAtTail(head, data);
        cin>>data;
    }
}

void print(node*head)
{
    //node*temp;
    while(head != NULL){ // traverse the linked list
        cout<<head->data<<"->";
        head = head->next;
    }
}

int main()
{
    node*head = NULL;
    buildList(head);
    print(head);

    return 0;
}
