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

void printInorder(Node* Node)
{
    if (Node == NULL)
        return;
    printInorder(Node->left);
    cout<<Node->data<<" ";
    printInorder(Node->right);
}


Node * levelOrder(Node *root,int data){
if(root==NULL){
    root = new Node(data);
    return root;
}
else if(root->data>=data){
    root->left = levelOrder(root->left,data);
}else if(root->data<data){
    root->right = levelOrder(root->right,data);
}
return root;
}


Node* Array_to_BST(int arr[],int l,int r){
if(r==0)
    return NULL;

Node *root = NULL;
for(int i=l;i<=r;i++){
    root = levelOrder(root,arr[i]);
}
return root;
}

int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
  int index=0;
Node *root = Array_to_BST(arr,0,n-1);
printInorder(root);
}
