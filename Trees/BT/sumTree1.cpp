#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

Node(int x){
data=x;
left=right=NULL;
}
};


void printInorder(Node* Node)
{
    if (Node == NULL)
        return;
    printInorder(Node->left);
    cout<<" "<<Node->data;
    printInorder(Node->right);
}

int toSumTree(Node *root){
if(!root)
    return 0;

int old_val = root->data;

root->data = toSumTree(root->left) + toSumTree(root->right);

return old_val + root->data;
}


int main(){
Node *root = NULL;
    int x;

    root = new Node(10);
    root->left = new Node(-2);
    root->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(-4);
    root->right->left = new Node(7);
    root->right->right = new Node(5);

    toSumTree1(root);


    cout<<"Inorder Traversal of the resultant tree is: \n";
    printInorder(root);
    return 0;
}
