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

// passing a pointer variable by reference
void insertAtHead(node*&head, int data)
{
    node*n = new node(data);  //'n' is a pointer to the next node.
    n->next = head;
    head = n;
}

int length(node*head)
{
    int len = 0;
    while(head != NULL){
        head = head->next;
        len += 1;
    }
    return len;
}

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

void insertInMiddle(node*&head, int data, int p)
{
    if(head == NULL || p == 0){
        insertAtHead(head, data);
    }
    else if(p>length(head)){
        insertAtTail(head, data);
    }
    else{
        // Insert in the middle
        // take p-1 jumps
        int jump = 1;
        node*temp = head;
        while(jump <= p-1){
            temp = temp->next;
            jump += 1;
        }
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;

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
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtTail(head,6);
    insertInMiddle(head,3,3);
    print(head);
    return 0;
}
