#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left,*right;

Node(int x){
    data = x;
    right = left = NULL;
}
};


int checkSumProperty(Node *root){
if(root==NULL || (root->left==NULL && root->right==NULL))
    return 1;
else{
    int left_data=0,right_data=0;
    if(root->left!=NULL){
        left_data=root->left->data;
    }
    if(root->right!=NULL){
        right_data = root->right->data;
    }
    if(root->data==left_data+right_data && checkSumProperty(root->left) && checkSumProperty(root->right))
        return 1;
    else
        return 0;
}
}

int main(){
Node* root = new Node(10);
root->left = new Node(8);
root->right = new Node(2);
root->left->left = new Node(2);
root->left->right = new Node(1);
root->right->left = new Node(2);


//0
cout<<checkSumProperty(root)<<endl;
}
