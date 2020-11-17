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
else if(root->data>=data){
    root->left = new Node(data);
}
else if(root->data<data){
 root->right = new Node(data);
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

void AddGreater(Node *root , int *sum){
if(root==NULL)
    return ;

    AddGreater(root->right,sum);

    (*sum) = (*sum) + root->data;
    root->data = (*sum);

    AddGreater(root->left,sum);
}

int main(){
Node *root=NULL;
int n;cin>>n;
int ar[n];

 root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);

int sum=0;
AddGreater(root,&sum);
inorder(root);
}

