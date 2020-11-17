#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left,*right;

Node(int x){
data=x;
left=right=NULL;
}

};

Node* construct(int ar[],Node* root,int i,int n){

if(i<n){
root = new Node(ar[i]);
root->left = construct(ar,root->left,2*i+1,n);
root->right = construct(ar,root->right,2*i+2,n);

}

return root;
}


void Inorder(Node *root){
if(!root)
    return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);

}

int main(){
int n,i;
cin>>n;
int ar[n];
for(i=0;i<n;i++)
    cin>>ar[i];

Node* root;
i=0;
root = construct(ar,root,i,n);

Inorder(root);
}
