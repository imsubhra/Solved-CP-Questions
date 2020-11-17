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
} ;

 Node* Insert( Node* root, int key)
{
    if (!root)
        root = new Node(key);
    else if (root->data > key)
        root->left = Insert(root->left, key);
    else if (root->data < key)
        root->right = Insert(root->right, key);
    return root;
}


int findLCA(Node *root,int n1,int n2){
    if(root==NULL)
        return -1;

    if((root->data>n1 && root->data<n2) ||(root->data>n2 && root->data<n1)){
        return root->data;
    }
    else if(root->data>n1 && root->data>n2){
        return  findLCA(root->right,n1,n2);
    }
    else if(root->data<n1 && root->data<n2){
        return findLCA(root->left,n1,n2);
    }
return root->data;
}

int findLevel(Node *root, int n , int level){
if(root==NULL)
    return 0;
if(root->data==n)
    return level;

    if(root->data<n)
        return findLevel(root->right,n,level+1);
    else if(root->data>n)
        return findLevel(root->left,n,level+1);
}

int shortestDist(Node *root, int n1,int n2){
 int lca = findLCA(root,n1,n2);

 return findLevel(root,n1,0)+findLevel(root,n2,0)-2*findLevel(root,lca,0);
}

int main(){
    Node* root = NULL;
    root = Insert(root, 20);
    Insert(root, 10);
    Insert(root, 5);
    Insert(root, 15);
    Insert(root, 30);
    Insert(root, 25);
    Insert(root, 35);
    int a = 5, b = 25;

    cout<<shortestDist(root,a,b);
}
