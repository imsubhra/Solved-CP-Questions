#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *right,*left;

Node(int x){
data=x;
left = right = NULL;
}
};

void inorder(Node *root,vector <int> &v){
if(root==NULL)
    return;

   inorder(root->left,v);
   v.push_back(root->data);
   inorder(root->right,v);
}

void ArraytoBST(Node *root, vector<int> v,int *i){
if(root==NULL)
    return;

  ArraytoBST(root->left,v,i);

  root->data = v[*i];
  (*i)++;

  ArraytoBST(root->right,v,i);
}

Node * BTtoBST(Node *root){

vector<int> v;

inorder(root,v);

sort(v.begin(),v.end());
int i=0;
ArraytoBST(root,v,&i);

return root;
}

void Inorder(Node *root){
if(root==NULL)
    return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
 }

int main(){
Node *root = NULL;
root = new Node(10);
root->left = new Node(30);
root->right = new Node(15);
root->left->left = new Node(20);
root->right->right = new Node(5);

//main function for bt to bst
root=BTtoBST(root);
//inorder traversal of bst
Inorder(root);
}
