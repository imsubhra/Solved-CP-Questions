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
};

void daigonalSum(Node *root){
if(root==NULL)
    return ;

 queue <Node*> q;
 q.push(root);
 q.push(NULL);
 vector <int> v;
 int sum=0;
 while(!q.empty()){
    root = q.front();
    q.pop();

    if(root==NULL){
        cout<<sum<<" ";
        if(q.empty())
        return;
        q.push(NULL);
        sum=0;
    }
    else {
        while(root){
            sum+=root->data;
            if(root->left)
            q.push(root->left);
            root=root->right;
        }
    }
 }

}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right = new Node(6);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->right->left->right = new Node(7);
    root->right->left->left = new Node(12);
    root->left->right->left = new Node(11);
    root->left->left->right = new Node(10);

    daigonalSum(root);

    return 0;
}
