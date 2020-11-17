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

Node * Insert(Node* root,int data){
if(root==NULL)
    return root;
else if(root->data>=data){
    root->left = Insert(root->left,data);
}
else if(root->data<data){
    root->right = Insert(root->right,data);
}
return root;
}

bool checkNodes(Node *root){
if(root==NULL)
    return 0;
else if(root->left!=NULL && root->right!=NULL)
            return 0;
else if(root->left!=NULL && root->right==NULL){
    return checkNodes(root->left);
}
else if(root->left==NULL && root->right!=NULL){
    return checkNodes(root->right);
}
else if(root->left==NULL && root->right==NULL)
    return 1;
}

int main(){
int n;cin>>n;
int ar[n];

for(int i=0;i<n;i++)
    cin>>ar[i];

Node *root = new Node(ar[0]);

for(int i=1;i<n;i++){
 root = Insert(root,ar[i]);
}

if(checkNodes(root)){
    cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}
}
