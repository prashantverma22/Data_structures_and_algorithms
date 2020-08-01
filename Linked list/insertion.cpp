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
    insertAtHead(head,3);
    print(head);
    return 0;
}
