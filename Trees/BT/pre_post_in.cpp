#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
public:
    int data;
    Node *left,*right;

    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node *buildT(int in[],int pre[],int l,int r,int &preI){
    if(l>r)
        return NULL;
    Node *tnode = new Node(pre[preI]);
    preI++;
    if(l==r)
        return tnode;
    int i;
    for(i=l;i<=r;i++){
        if(in[i]==tnode->data)
            break;
    }

    tnode->left = buildT(in,pre,l,i-1,preI);
    tnode->right= buildT(in,pre,i+1,r,preI);

    return tnode;
}

void postorder(Node *root,vector <int> &v){
if(root==NULL)return ;
postorder(root->left,v);
postorder(root->right,v);
cout<<root->data<<" ";
v.push_back(root->data);
}

int main(){
cout<<"Total Nodes : ";
int n;cin>>n;
int in[n],pre[n],post[n];
//cout<<"inorder traversal :"<<endl;
for(ll i=0;i<n;i++)cin>>in[i];
//cout<<endl;
//cout<<"preorder traversal :"<<endl;
for(ll i=0;i<n;i++)cin>>pre[i];
//cout<<endl;
//cout<<"postorder traversal :"<<endl;
for(ll i=0;i<n;i++)cin>>post[i];
//cout<<endl;
int preI = 0;

Node *root = buildT(in,pre,0,n-1,preI);

vector <int> v;
postorder(root,v);
cout<<endl;
bool f=0;
for(ll i=0;i<n;i++){
if(post[i]!=v[i]){
    cout<<post[i]<<" "<<v[i]<<endl;
    f=1;
    break;
}
}

if(f==0)
cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}
}
