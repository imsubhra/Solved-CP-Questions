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

void FullNodes(Node *root){
if(root==NULL)
    return;

    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp->left && temp->right){
            cout<<temp->data<<" ";
            q.push(temp->left);
            q.push(temp->right);
        }
        else if(temp->left){
            q.push(temp->left);
        }
        else if(temp->right){
            q.push(temp->right);
        }else{
        continue;
        }
    }
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(7);
    root->left->left = new Node(8);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(6);

    FullNodes(root);
    return 0;
}
