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

void inorder(Node* root, vector <int> &v){
if(root==NULL)
    return;

   inorder(root->left,v);
   v.push_back(root->data);
   inorder(root->right,v);
}


int main(){
Node *root = NULL;
root = new Node(20);
root->left = new Node(8);
root->left->left = new Node(4);
root->left->right = new Node(12);
root->left->right->left = new Node(10);
root->left->right->right = new Node(14);
root->right = new Node(22);
int k;cin>>k;
vector <int> v;
inorder(root,v);
cout<<v[k-1]<<endl;
}
