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

//iterative
void inorder(Node* root){
stack <Node*> s;
Node *current = root;

while(current!=NULL || s.empty()==false){
    while(current){
    s.push(current);
    current=current->left;
    }
     current= s.top();
    s.pop();
    cout<<current->data<<" ";
    current = current->right;
   }
}

//recursive
void inOrder(Node *root){
if(root==NULL)
    return ;
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
}



int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);

inorder(root);
}
