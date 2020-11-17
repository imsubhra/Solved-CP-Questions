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

bool Helper(Node *root,int node,vector <int> &path){
if(root==NULL)
    return false;

    path.push_back(root->data);
    if(root->data==node)
    return true;

    if((root->left && Helper(root->left,node,path))||(root->right && Helper(root->right,node,path)))
    return true;

    path.pop_back();
    return false;
}

int KthAncestor(Node *root,int k,int node){
vector <int> v;
if(k==0)
    return -1;
if(Helper(root,node,v)){
 if(k>=v.size())
    return -1;
return v[v.size()-1-k];
}
else
    return -1;
}

int main(){
Node *root = NULL;
root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
int n,k;cin>>n>>k;
cout<<KthAncestor(root,k,n);
}
