#include<bits/stdc++.h>
using namespace std;

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

void printpostOrder(Node* root){
if(!root)
    return;

    printpostOrder(root->left);
    printpostOrder(root->right);
    cout<<root->data<<" ";
}

int searchIndex(int pre[],int l,int r,int key){

for(int i=l;i<=r;i++){
    if(pre[i]==key)
    return i;
}

}

int preIndex=0;

Node* buildTree(int in[],int pre[], int l, int r)
{

if(l>r)
return NULL;

Node* tnode = new Node(pre[preIndex]);
preIndex++;

if(l==r)
return tnode;

int i;
for(i=l;i<=r;i++){
    if(tnode->data == in[i])
    break;
}

tnode->left = buildTree(in,pre,l,i-1);
tnode->right = buildTree(in,pre,i+1,r);

return tnode;
}


int main(){
int n;
cin>>n;
int pre[n],in[n];

for(int i=0;i<n;i++){
    cin>>in[i];
}
for(int i=0;i<n;i++){
    cin>>pre[i];
}

Node* root = buildTree(in,pre,0,n-1);

printpostOrder(root);
}
