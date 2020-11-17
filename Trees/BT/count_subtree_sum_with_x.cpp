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

int sumTree(Node* root){
if(!root)
    return 0;

    return sumTree(root->left) + sumTree(root->right) + root->data;

}

int SumOfSubTree(Node *root,int x){
if(!root)
    return 0;

    queue <Node*> q;
    q.push(root);

    int cc=0;
    while(!q.empty()){
        root = q.front();
        q.pop();

        int sum = sumTree(root);
        if(sum==x){
            cc++;
        }
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
    }
 return cc;
}


int main(){
     Node* root = new Node(5);
    root->left = new Node(-10);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right = new Node(8);
    root->right->left = new Node(-4);
    root->right->right = new Node(7);

    int x = 6;
    cout<<SumOfSubTree(root,x)<<endl;

    return 0;
}
