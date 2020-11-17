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

Node * findMin(Node *root){
if(root==NULL)
    return NULL;

    while(root && root->left!=NULL){
        root=root->left;
    }
    return root;
}


Node* Delete(Node *root,int data){
if(root==NULL)
    return NULL;
else if(root->data>data)
    root->left =Delete(root->left,data);
else if(root->data<data)
    root->right = Delete(root->right,data);

else{
    //If no child
    if(root->left==NULL && root->right==NULL){
        free(root);
        root = NULL;
        return root;
    }
    //if One child
    else if(root->left==NULL){
        Node* temp=root;
         root=root->right;
        free(temp);
        return root;
    }
    else if(root->right==NULL){
        Node *temp=root;
        root=root->left;
        free(temp);
        return root;
    }
    //if 2 children
    else{
        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = Delete(root->right,temp->data);
        return root;
    }
}
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
Delete(root,10);

inorder(root);
}

