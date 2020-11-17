#include<bits/stdc++.h>
using namespace std;

class Node
{
 public:
    int data;
    Node *l;
    Node *r;

Node(int x){
data=x;
l=r=NULL;
}
};


//Best Method
int sumAtMaxDepth(Node *root){
if(!root) return 0;

queue <Node*> q;
q.push(root);
int sum=0;
while(!q.empty()){
root=q.front();
q.pop();

if(root->l==NULL && root->r==NULL)
    sum+=root->data;

if(root->l)
q.push(root->l);

if(root->r)
    q.push(root->r);
}
return sum;
}
//-=============================================
//recursive approach
int height(Node *root){
if(root==NULL)
    return 0;
else{

int lh = height(root->l);
int rh = height(root->r);

return max(lh,rh) + 1;
}
}


void MaxDepthSum(Node *root,int h,int &sum){
if(!root) return ;

if(h==1)
    sum+=root->data;

    MaxDepthSum(root->l,h-1,sum);
    MaxDepthSum(root->r,h-1,sum);
}

int MDS(Node *root){
if(root==NULL)
    return 0;

    int h = height(root);
    int sum=0;
    MaxDepthSum(root,h,sum);

    return sum;
}
//================================NOT CORRECT=============================
int main(){
    Node *root;
    root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);
    root->l->l = new Node(4);
    root->l->r = new Node(5);
    root->r->l = new Node(6);
    root->r->r = new Node(7);

    cout<<MDS(root);
}
