#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* right;
Node* left;

Node(int key){
data = key;
right = NULL;
left = NULL;
}

};

//recursive
void preorder(Node* root){
if(!root)
    return ;

cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

//iterative
void PreOrder(Node *root){
if(!root)
    return ;

stack <Node*> s;
s.push(root);
while(!s.empty()){
    root = s.top();
    s.pop();
    cout<<root->data<<" ";
    if(root->right)
    s.push(root->right);
    if(root->left)
    s.push(root->left);
}

}

int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);

preorder(root);
cout<<"\n";
PreOrder(root);
}
