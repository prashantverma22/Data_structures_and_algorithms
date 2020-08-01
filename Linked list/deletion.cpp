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

void deleteAtHead(node*&head)
{
    if(head == NULL){
        return;
    }
    node*temp = head;
    head = head->next;
    delete temp;
    return;
}

void deleteAtTail(node*&head)
{
    node*prev = NULL;
    node*temp = head;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    delete temp;
    prev->next = NULL;
    return;
}

void deleteAtMiddle(node*&head)
{
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
    }

    node*slow = head;
    node*fast = head;
    node*prev = NULL;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    delete slow;
    return;
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

    cout<<endl;
    //deleteAtHead(head);
    //deleteAtTail(head);
    deleteAtMiddle(head);
    print(head);
    return 0;
}
