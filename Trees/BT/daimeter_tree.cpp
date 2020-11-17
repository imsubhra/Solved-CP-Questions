#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

Node(int x){
data = x;
left=right=NULL;
}

};

int depth(Node *root){
if(root==NULL)
    return 0;

    int ldepth = depth(root->left);
    int rdepth= depth(root->right);

    return max(rdepth,ldepth)+1;
}


int daimeter(Node* root){
if(root==NULL)
    return 0;

    int ldepth = depth(root->left);
    int rdepth = depth(root->right);
    int tdepth = ldepth+rdepth+1;

    int ldaimeter = daimeter(root->left);
    int rdaimeter = daimeter(root->right);
    int max_daimeter = max(ldaimeter,rdaimeter);
    return max(tdepth,max_daimeter);

}


int main(){

    Node *root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);

    cout<<daimeter(root);
}
