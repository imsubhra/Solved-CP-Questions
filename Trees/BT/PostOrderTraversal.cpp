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
void PostOrder(Node* root){
if(!root)
    return ;
PostOrder(root->left);
PostOrder(root->right);
cout<<root->data<<" ";
}

//iterative
void postOrder(Node* root){
if(!root)
    return;
stack <Node*> s1,s2;

s1.push(root);
while(!s1.empty()){
root = s1.top();
s1.pop();

s2.push(root);

if(root->right)
     s1.push(root->left);
if(root->left)
  s1.push(root->right);
}

while(!s2.empty()){
    root = s2.top();
    s2.pop();
    cout<<root->data<<" ";
}
}

int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);

PostOrder(root);
cout<<"\n";
postOrder(root);
}

