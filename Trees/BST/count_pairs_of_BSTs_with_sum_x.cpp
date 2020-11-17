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

Node * Insert(Node *root,int data){
if(root==NULL){
   root = new Node(data);
   return root;
}
else if(root->data>=data){
    root->left = Insert(root->left,data);
}
else if(root->data<data){
    root->right = Insert(root->right,data);
}
return root;
}

void inorder(Node *root,vector <int> &v){
if(root==NULL)
    return;

    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

bool searchBST(Node *root,int data){
if(root==NULL)
    return 0;
else if(root->data==data)
    return 1;
else if(root->data>data)
    return searchBST(root->left,data);
else if(root->data<data)
    return searchBST(root->right,data);
}

int CountPairs(Node *root1,Node *root2, int x){
vector <int> v;
inorder(root1,v);
int cc=0;
/*for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";*/
for(int i=0;i<v.size();i++){
        if(searchBST(root2,(x-v[i]))==true)
            cc++;
}
return cc;
}

int main(){
Node *root1=NULL,*root2=NULL;
int n;cin>>n;
int temp ;cin>>temp;
root1=Insert(root1,temp);
for(int i=1;i<n;i++){
    cin>>temp;
    Insert(root1,temp);
}

int n1;cin>>n1;
int temp1 ;cin>>temp1;
root2=Insert(root2,temp1);
for(int i=1;i<n1;i++){
    cin>>temp1;
    Insert(root2,temp1);
}

int x;cin>>x;
cout<<CountPairs(root1,root2,x);
}
