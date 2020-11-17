//Check whether two nodes are cousins
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *right ,*left;

Node(int x){
data=x;
right = left = NULL;
}
};

int level(Node *root,Node *n1, int lev){
if(root==NULL) return 0;
if(root==n1) return lev;

int l = level(root->left,n1,lev+1);
if(l)
    return l;
return level(root->right,n1,lev+1);
}

bool sibling(Node *root, Node *n1, Node *n2){
if(!root)
    return 0;

return ((root->left==n1 && root->right==n2)||(root->left==n2 && root->right==n1) || sibling(root->left,n1,n2) || sibling(root->right,n1,n2));

}

bool isCousin(Node *root, Node *n1, Node *n2){
if(level(root,n1,0)==level(root,n2,0) && (!sibling(root,n1,n2)))
    return 1;
else
    return 0;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(15);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);

    Node *Node1,*Node2;
    Node1 = root->left->left;
    Node2 = root->right->right;

    cout<<isCousin(root,Node1,Node2);
}
