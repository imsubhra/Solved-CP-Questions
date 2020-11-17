#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
    data = x;
    right = left =NULL;
    }
};

void daigonal(Node* root){
if(!root)
    return ;

 queue <Node*> q;
 q.push(root);
 q.push(NULL);
 while(!q.empty()){
 root = q.front();
 q.pop();

 if(root==NULL){
     if(q.empty())
     return;
    cout<<"\n";
    q.push(NULL);
 }else{
    while(root){
    cout<<root->data<<" ";
    if(root->left)
        q.push(root->left);
    root=root->right;
    }
 }
 }
}


void daigonalSum(Node* root){
if(!root)
    return ;
int sum=0;
 queue <Node*> q;
 q.push(root);
 q.push(NULL);
 while(!q.empty()){
 root = q.front();
 q.pop();
 if(root==NULL){
    cout<<sum<<" ";
    sum=0;
    if(q.empty())
     return;
    q.push(NULL);
 }else{
    while(root){
    sum+=root->data;
    if(root->left)
        q.push(root->left);
    root=root->right;
    }
 }
 }
}

long int sumBT(Node* root)
{
    if(root==NULL)
    return 0;
    long long int sum=0;
    // Code here
    queue <Node*> q;
    q.push(root);
    while(q.size()>0){
        root = q.front();
        q.pop();
        if(root->left)
        q.push(root->left);
        if(root->right)
        q.push(root->right);
        sum+=root->data;
    }
    return sum;
}

long long sumLeaf(Node* root){
if(root==NULL)
    return 0;
long long int sum=0;
queue <Node*> q;
q.push(root);

while(q.size()>0){
    root=q.front();
    q.pop();
    if(root->left==NULL && root->right==NULL)
        sum+=root->data;
        if(root->left)
        q.push(root->left);
        if(root->right)
        q.push(root->right);
}
return sum;
}


int main(){
Node* root = new Node(8);
root->left = new Node(3);
root->left->left = new Node(1);
root->right = new Node(10);
root->right->left = new Node(6);
root->right->right = new Node(14);
root->right->left->left = new Node(4);
root->right->left->right = new Node(7);
root->right->right->left = new Node(13);

//daigonalSum(root);
long long int sum = sumLeaf(root);
cout<<sum<<endl;
}
