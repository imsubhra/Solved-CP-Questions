#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *right,*left;

Node(int x){
data=x;
left=right=NULL;
}
};

Node *Insert(Node *root,int data){
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


bool searching(Node *root,int data){
if(root==NULL)
    return 0;

while(root!=NULL){
    if(data>root->data)
        root=root->right;
    else if(data<root->data)
        root=root->left;
    else
        return true;
}
return false;
}

int main(){
    Node* root = NULL;
    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);
    int x;
    cin>>x;
    if(searching(root,x)){
        cout<<"Yes";
    }
    else
        cout<<"No";
}
