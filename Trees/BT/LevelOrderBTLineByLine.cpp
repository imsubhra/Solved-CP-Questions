#include<bits/stdc++.h>
using namespace std;

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

void levelOrderLine(Node* root){
queue <Node*> q;

if(root==NULL)
    return ;

q.push(root);
q.push(NULL);

while(q.size()>1){
    Node* curr = q.front();
    q.pop();

    if(curr==NULL){
        q.push(NULL);
        cout<<"\n";
    }
    else{
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);

        cout<<curr->data<<" ";
    }
}
}


int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->left->left = new Node(4);
root->right = new Node(3);
root->left->right = new Node(5);

levelOrderLine(root);
}
