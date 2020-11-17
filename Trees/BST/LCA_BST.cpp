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

Node* Insert(Node *root,int data){
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

int findLCA(Node *root,int n1,int n2){
if(root==NULL)
    return -1;

else if(root->data>n1 && root->data>n2){
    return findLCA(root->left,n1,n2);
}
else if(root->data<n1 && root->data<n2){
    return findLCA(root->right,n1,n2);
}

return root->data;
}



int main(){
int n;cin>>n;
int ar[n];
Node *root=NULL;
cin>>ar[0];

root = Insert(root,ar[0]);
for(int i=1;i<n;i++){
    cin>>ar[i];
    Insert(root,ar[i]);
}
int n1,n2;
cin>>n1>>n2;

cout<<findLCA(root,n1,n2);
}
