//Is a given tree sum tree or not

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

int sum(Node *root){
if(root==NULL)
    return 0;

    return sum(root->left) +root->data + sum(root->right);
}

bool check(Node *root){
if(root==NULL || (root->left==NULL && root->right==NULL))
    return 1;

    int ls = sum(root->left);
    int rs = sum(root->right);

    if(ls+rs==root->data && check(root->left) && check(root->right))
        return 1;
    else
        return 0;

}

int main(){
Node* root = new Node(26);
root->left = new Node(10);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(6);
root->right->left = new Node(1);
root->right->right = new Node(2);

cout<<check(root);
}
