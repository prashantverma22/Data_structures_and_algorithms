#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
        data=d;
    }
};

void push(node*&head,int data){
    node*n = new node(data);
    node*temp = head; //used to traverse the loop
    n->next=head;
    if(head != NULL){
        while(temp->next != head){
            temp=temp->next;
        }
        temp->next=n;
    }
    else{
        n->next=n;
    }
    head=n;
}

void print(node*head){
    node*temp=head;
    while(temp->next != head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<" END";
}

node* getNode(node*&head,int data)
{
    node*temp=head;
    while(temp->next != head){
        if(temp->data == data){return temp;}
        temp=temp->next;
    }
    if(temp->data == data){return temp;}
    else {return NULL;}
}

void deleteNode(node*&head,int data)
{
    node*del = getNode(head,data);
    if(del == NULL){
        cout<<"node not present"<<endl;
        return;
    }
    if(head == del){
        head = del->next;
    }
    node*temp = head;
    while(temp->next != del){
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}

int main()
{
    node*head=NULL;
    push(head,5);
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
    print(head);
    deleteNode(head,3);
    cout<<endl;
    print(head);
    return 0;
}
