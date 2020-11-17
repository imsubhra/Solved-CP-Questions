#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left,*right;

Node(int x){
    data = x;
    left = right = NULL;
}
};

set <int> s;
void checkLeaves(Node *root,int lev){
    if(!root)
        return ;
    if(root->left==NULL && root->right==NULL){
        h.insert(lev);
        return ;
    }

    checkLeaves(root->left,lev+1);
    checkLeaves(root->right,lev+1);
}

int main(){
   Node *temp = new Node(9);
    temp->left = new Node(17);
    temp->right = new Node(4);
    temp->left->left = new Node(22);
    temp->left->left->right = new Node(20);
    temp->right->right = new Node(3);
    temp->right->left = new Node(25);
    temp->right->left->left = new Node(25);
    temp->right->left->right = new Node(25);

    checkLeaves(temp,0);
    if(s.size()>1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
