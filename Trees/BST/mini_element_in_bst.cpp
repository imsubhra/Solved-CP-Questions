#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left,*right;

Node(int x){
data=x;
left=right=NULL;
}
};

Node * Insert(Node *root,int data){
if(root==NULL){
    root = new Node(data);
    return root;
}
else if(root->data>=data){
    root->left = Insert(root->left,data);
}
else if(root->data<data){
    root->right = Insert(root->right,data);
}
return root;
}

void inorder(Node* Node)
{
    if (Node == NULL)
        return;
    inorder(Node->left);
    cout<<Node->data<<" ";
    inorder(Node->right);
}

int miniEleBST(Node *root){
if(root==NULL)
    return 0;

    while(root && root->left!=NULL){
        root=root->left;
    }
    return root->data;
}


int main(){
Node *root =NULL;
root = Insert(root,20);
Insert(root,8);
Insert(root,22);
Insert(root,4);
Insert(root,12);
Insert(root,10);
Insert(root,14);

cout<<miniEleBST(root);
}
