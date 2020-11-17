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

Node * ArraytoBST(int arr[],int l,int r){
if(l>r)
    return NULL;

int mid=(l+r)/2;
Node *root = new Node(arr[mid]);

if(l==r)
    return root;

root->left = ArraytoBST(arr,l,mid-1);
root->right = ArraytoBST(arr,mid+1,r);

return root;
}

void preorder(Node* Node)
{
    if (Node == NULL)
        return;

    cout<<Node->data<<" ";
    preorder(Node->left);
    preorder(Node->right);
}

int main(){
int n;cin>>n;
int arr[n];

for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);

Node *root = ArraytoBST(arr,0,n-1);

preorder(root);
}
