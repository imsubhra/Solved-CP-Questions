#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
public:
    int data;
    Node *left,*right;

    Node(int x){
        data=x;
        left=right=NULL;
    }
};

bool FullBT(Node *root){
    if(root==NULL || (root->right==NULL && root->left==NULL))
        return 1;

    if( (root->right!=NULL && root->left!=NULL) && FullBT(root->left) &&
       FullBT(root->right))
        return 1;
    else
        return 0;

}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->left->right = new Node(40);
    root->left->left = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right->left = new Node(80);
    root->left->right->right = new Node(90);
    root->right->left->left = new Node(80);
    root->right->left->right = new Node(90);
    root->right->right->left = new Node(80);
    //root->right->right->right = new Node(90);

    if(FullBT(root)){
        cout<<"Full Binary Tree"<<endl;
    }else{
        cout<<"Not Full Binary Tree"<<endl;
    }
}
