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

vector <int> v;
void trav(Node* root){
if(!root)
    return;

    trav(root->left);
    v.push_back(root->data);
    trav(root->right);
}



bool isPathSum(Node *root){
if(!root) return 0;

trav(root);

for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
         if(v[i]+v[j]==root->data){
            return 1;
         }
        }
}
return 0;
}

int main(){
    Node *root = new Node(8);
    root->left    = new Node(5);
    root->right   = new Node(4);
    root->left->left = new Node(9);
    root->left->right = new Node(7);
    root->left->right->left  = new Node(7);
    root->left->right->right = new Node(12);
    root->left->right->right->right = new Node(2);
    root->right->right = new Node(11);
    root->right->right->left = new Node(9);
    isPathSum(root)? cout << "Yes" : cout << "No";
}
