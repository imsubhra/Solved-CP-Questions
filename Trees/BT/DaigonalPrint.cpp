#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
    data = x;
    right = left =NULL;
    }
};

void daigonal(Node* root){
if(!root)
    return ;

 queue <Node*> q;
 q.push(root);
 q.push(NULL);
 while(!q.empty()){
 root = q.front();
 q.pop();

 if(root==NULL){
     if(q.empty())
     return;
    cout<<"\n";
    q.push(NULL);
 }else{
    while(root){
    cout<<root->data<<" ";
    if(root->left)
        q.push(root->left);
    root=root->right;
    }
 }
 }
}




int main(){
Node* root = new Node(8);
root->left = new Node(3);
root->left->left = new Node(1);
root->right = new Node(10);
root->right->left = new Node(6);
root->right->right = new Node(14);
root->right->left->left = new Node(4);
root->right->left->right = new Node(7);
root->right->right->left = new Node(13);

daigonal(root);

}
