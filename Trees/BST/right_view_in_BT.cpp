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

void inorder(Node *root){
if(root==NULL)
    return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//Recursive
void rightView(Node *root ,int level , int *max_level){
if(!root)
    return ;

    if(*max_level<level){
        *max_level=level;
        cout<<root->data<<" ";
    }

    rightView(root->right,level+1,max_level);
      rightView(root->left,level+1,max_level);
}

//Iterative
void RightView(Node *root){
if(!root)
    return ;

    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);

        if(q.front()==NULL){
            q.pop();
            cout<<f->data<<" ";
            if(!q.empty())
                q.push(NULL);
        }
    }
}

int main(){
    Node *root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);

    int max_level=0;
    RightView(root);
    //rightView(root,1,&max_level);
}
