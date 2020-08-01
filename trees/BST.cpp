//Binary Search Tree-Insertion,Build & Deletion.
#include <iostream>
#include<climits>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node*insert(node*root,int data){
    //base case
    if(root==NULL){
        return new node(data);
    }
    //recursive case
    if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}

node*build(){
    int d;
    cin>>d;
    node*root=NULL;
    while(d != -1){
        root=insert(root,d);
        cin>>d;
    }
    return root;
}

//inorder print
void print(node*root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

//Searching
bool search(node*root,int data){
    //base cases:
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    //recursive cases:
    if(data<=root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

node*deletion(node*root,int data){
    if(root==NULL){
        return NULL;
    }
    else if(data < root->data){
        root->left = deletion(root->left,data);
        return root;
    }
    else if(data == root->data){
        //1. Node with 0 children-leaf node.
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //2. Node with 1 child
        if(root->left != NULL && root->right==NULL){
            node*temp = root->left;
            delete root;
            return temp;
        }
        if(root->right != NULL && root->left==NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
        //3. Node with 2 children
        node*replace = root->right;
        while(replace->left != NULL){
            replace=replace->left;
        }
        root->data = replace->data;
        root->right = deletion(root->right,replace->data);
        return root;
    }
    else{
        root->right = deletion(root->right,data);
        return root;
    }
}

bool checkForBST(node*root,int min=INT_MIN,int max=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data >= min && root->data <= max && checkForBST(root->left,min,root->data) && checkForBST(root->right,root->data,max)){
        return true;
    }
    return false;
}

class linkedList{
public:
    node*head;
    node*tail;
};

linkedList flattenBST(node*root){
    linkedList l;
    //base case: when the tree is empty.
    if(root==NULL){
        l.head=l.tail=NULL;
        return l;
    }
    //case 1: leaf node
    if(root->left==NULL && root->right==NULL){
        l.head=l.tail=root;
        return l;
    }
    //case 2: left is not null
    if(root->left != NULL && root->right==NULL){
      linkedList leftLL = flattenBST(root->left);  
      leftLL.tail->right = root;
      l.head = leftLL.head;
      l.tail = root;
      return l;
    }
    //case 3: right is not null
    if(root->left==NULL && root->right != NULL){
       linkedList rightLL = flattenBST(root->right);
       root->right = rightLL.head;
       l.head = root;
       l.tail = rightLL.tail;
       return l;
    }
    // both sides are null
    linkedList leftLL = flattenBST(root->left);
    linkedList rightLL = flattenBST(root->right);
    leftLL.tail->right = root;
    root->right = rightLL.head;
    l.head = leftLL.head;
    l.tail = leftLL.tail;
    return l;
}

int main() {
    node*root=build();
    //print(root);
    // int s;
    // cin>>s;
    // if(search(root,s)){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"Not present";
    // }

    // root = deletion(root,5);
    // print(root);

    // if(checkForBST(root)){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    print(root);

    cout<<endl;

    linkedList l = flattenBST(root);
    node*temp = l.head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->right;
    }

    return 0;
}

