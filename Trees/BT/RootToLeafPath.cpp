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


void middleElement(Node *r1, Node *r2){
if(r1==NULL || r2==NULL)
    return ;

    if((r2->left==NULL)&&(r2->right==NULL))
    {
        cout<<r1->data<<" ";
        return ;
    }

    middleElement(r1->left,r2->left->left);
    middleElement(r1->right,r2->left->left);
}

int main(){
    int arr[] = {5, 8, 6, 7};
    int n = 4;
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->left->left->left = new Node(1);
    root->right->left = new Node(6);
    root->right->left->right = new Node(7);

    middleElement(root,root);
    return 0;
}
