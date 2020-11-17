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

Node* findLCA(Node *root,int n1,int n2){
if(!root)
    return NULL;

if(root->data==n1 || root->data==n2)
        return root;

Node *right_LSA = findLCA(root->right,n1,n2);
Node *left_LSA = findLCA(root->left,n1,n2);

if(right_LSA && left_LSA)
   return root;

return right_LSA==NULL? left_LSA:right_LSA;
}


int findLevel(Node* root, int n, int level){
if(root==NULL) return -1;
if(root->data==n) return level;

int left = findLevel(root->left,n,level+1);
if(left==-1)
    return findLevel(root->right,n,level+1);

    return left;
}


int findDist(Node* root, int n1, int n2, Node* lca){

return findLevel(root,n1,0) + findLevel(root,n2,0) - 2*findLevel(root,lca->data,0);

}


int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left =new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);
root->right->left->right = new Node(8);

int n1,n2;cin>>n1>>n2;

Node *lca = findLCA(root,n1,n2);

cout<< findDist(root,n1,n2,lca);
}
