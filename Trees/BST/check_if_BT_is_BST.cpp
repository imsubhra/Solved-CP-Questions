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


void inorder(Node *root, vector <int> &v){
    if(root==NULL)
        return;

    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);

}

int main(){
Node *root = new Node(4);
root->left = new Node(2);
root->left->left = new Node(1);
root->left->right = new Node(3);
root->right = new Node(5);

vector <int> v;
inorder(root,v);

bool f=0;
for(int i=0;i<v.size()-1;i++){
   if(v[i]<v[i+1]){
        continue;
    }
    else{
    f=1;
    break;
    }
}

if(!f)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}

