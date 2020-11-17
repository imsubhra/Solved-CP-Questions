#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* right,*left;

Node(int x){
data=x;
left=right=NULL;
}

};

int postIndex;
Node* construct(int in[],int post[],int l, int r,int *postIndex){
if(l>r)
return NULL;


Node* tnode = new Node(post[*postIndex]);
(*postIndex)--;

if(l==r)
return tnode;

int i;
for(i=l;i<=r;i++){
    if(tnode->data==in[i])
        break;
}


tnode->right = construct(in,post,i+1,r,postIndex);
tnode->left = construct(in,post,l,i-1,postIndex);

return tnode;
}

void preOrder(Node* root){
if(!root)
    return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
int n;cin>>n;
int in[n];
for(int i=0;i<n;i++)
    cin>>in[i];
int post[n];
for(int i=0;i<n;i++)
    cin>>post[i];
    postIndex=n-1;
    Node* root = construct(in,post,0,n-1,&postIndex);
    preOrder(root);
}
