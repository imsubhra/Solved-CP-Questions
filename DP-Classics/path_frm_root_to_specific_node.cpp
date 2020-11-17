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

void print(Node *root,int paths[],int len,int x){
if(!root) return ;

paths[len]=root->data;
len++;

if(root->data==x){
    for(int i=0;i<len;i++){
        cout<<paths[i]<<" ";
    }
    cout<<"\n";
}
else{
    print(root->left,paths,len,x);
    print(root->right,paths,len,x);
}
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int paths[1000];
    int len = 0;
    int x;cin>>x;
    print(root,paths,len,x);
    return 0;
}
