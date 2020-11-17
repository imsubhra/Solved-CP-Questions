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

void countAndNodes(Node *root,int &ct,set<int> &s){
if(root==NULL)
    return ;

    ct++;
    s.insert(root->data);
    countAndNodes(root->left,ct,s);
    countAndNodes(root->right,ct,s);
}

bool Dup(Node *root){
if(!root)
    return 1;
    int ct=0;
    set<int> s;
    countAndNodes(root,ct,s);
    if(s.size()==ct)
        return 1;
    else return 0;
}

int main(){
    Node *root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    //root->right->right = new Node(2);

    if(Dup(root)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
