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

Node * findLCA(Node *root,int n1,int n2){
if(root==NULL)
    return NULL;

    if(root->data==n1 || root->data==n2)
        return root;

    //search for nodes in both subtrees
    Node *right_lca = findLCA(root->right,n1,n2);
    Node *left_lca = findLCA(root->left,n1,n2);

    if(right_lca && left_lca)//if nodes exist in both subtrees
       return root;

    return right_lca == NULL ? left_lca:right_lca;

}

int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left =new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);


int n1,n2;cin>>n1>>n2;

Node *temp = findLCA(root,n1,n2);
cout<<temp->data;
}
