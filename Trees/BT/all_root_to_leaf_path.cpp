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


void printPaths(Node *root, int paths[],int pathlen){
if(root==NULL)
    return;
else{
    paths[pathlen]=root->data;
    pathlen++;

    if(root->left==NULL && root->right==NULL){
        for(int i=0;i<pathlen;i++)
            cout<<paths[i]<<" ";
            cout<<endl;
    }
    else{
        printPaths(root->left,paths,pathlen);
        printPaths(root->right,paths,pathlen);
    }
}
}


int main(){
     Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int paths[1000];
    int len = 0;
    printPaths(root,paths,len);
    return 0;
}
