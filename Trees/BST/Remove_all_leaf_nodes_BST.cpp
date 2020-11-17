#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *right,*left;

Node(int x){
data=x;
right=left=NULL;
}
};

Node *Insert(Node *root,int data){
if(root==NULL){
    root = new Node(data);
    return root;
}
else if(root->data>data){
    root->left = Insert(root->left,data);
}
else if(root->data<data){
   root->right = Insert(root->right,data);
}
return root;
}

void inorder(Node *root){
if(root==NULL)
    return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node * DeleteLeafNodes(Node *root){
if(root==NULL)
        return NULL;

if(root->left==NULL &&root->right==NULL){
   root = NULL;
   return root;
}

root->left = DeleteLeafNodes(root->left);
root->right = DeleteLeafNodes(root->right);

return root;
}

int main(){
Node *root=NULL;
root = Insert(root,20);
Insert(root,5);
Insert(root,15);
Insert(root,30);
Insert(root,25);
Insert(root,35);
Insert(root,40);
 cout<<"Inorder before Deleting the leaf node :"<<endl;
 inorder(root);
 cout<<"\n";
 root = DeleteLeafNodes(root);
 cout<<"Inorder after Deleting the leaf node :"<<endl;
 inorder(root);
}
