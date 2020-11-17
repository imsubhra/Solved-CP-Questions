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

Node* Insert(Node* root,int data){
if(root==NULL){
    root = new Node(data);
}
else if(root->data>=data){
    root->left = Insert(root->left,data);
}
else{
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

int main(){
Node *root = NULL;
root=Insert(root,10);
Insert(root,2);
Insert(root,7);
Insert(root,18);
Insert(root,4);


inorder(root);
}
