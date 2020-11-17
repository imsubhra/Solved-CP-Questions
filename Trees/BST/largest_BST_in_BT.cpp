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
else
    root->right = new Node(data);
return root;
}

void inorder(Node *root, vector <int> &v){
if(root==NULL)
    return ;

    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

bool isBST(Node *root){
if(root==NULL)
    return 1;
    vector <int> v;
    inorder(root,v);

    for(int i=0;i<v.size()-1;i++){
        if(v[i]<=v[i+1])
            continue;
        else
            return 0;
    }
    return 1;
}

int Size(Node *root){
if(root==NULL)
    return 0;

    return Size(root->left) + Size(root->right) + 1 ;
}

int LargestBST(Node *root){
if(isBST(root))
    return Size(root);

    return max(LargestBST(root->left),LargestBST(root->right));
}

int main(){
Node *root=NULL;
root = new Node(50);
root->right = new Node(60);
root->left = new Node(30);
root->left->left = new Node(5);
root->left->right = new Node(20);
root->right->left = new Node(45);
root->right->right = new Node(70);
root->right->right->left = new Node(65);
root->right->right->right = new Node(80);
cout<<LargestBST(root)<<endl;
}
