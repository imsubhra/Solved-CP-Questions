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

Node *constructBST(int pre[],int *preIndex,int l,int r){
if(l>r)
    return NULL;

Node *root = new Node(pre[*preIndex]);
*preIndex=*preIndex+1;

if(l==r)
return root;

int i;
for(i=l;i<=r;i++){
    if(root->data<pre[i]){
        break;
    }
}

root->left = constructBST(pre,preIndex,*preIndex,i-1);
root->right = constructBST(pre,preIndex,i+1,r);

return root;
}

void inorder(Node *root){
if(root==NULL)
    return;

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

int main(){
int pre[]={10,5,1,7,40,50};
int n=6;
int preIndex=0;
Node *root  =  constructBST(pre,&preIndex,0,n);
inorder(root);
return 0;
}
