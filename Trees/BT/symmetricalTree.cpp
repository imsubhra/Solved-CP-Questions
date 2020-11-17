#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *right,*left;

    Node(int x){
    data=x;
    right=left=NULL;
    }
};

//Recursive approach
bool sym( Node *root1 , Node *root2 ){
if(root1==NULL && root2==NULL)
    return 1;
if(root1==NULL || root2==NULL)
    return 0;

if(root1->data==root2->data && sym(root1->right,root2->left)
   && sym(root1->left,root2->right)){
    return 1;
}

return 0;
}


int main(){
Node *root = new Node(1);
root->right = new Node(2);
root->left = new Node(2);
root->left->left = new Node(3);
root->left->right = new Node(4);
root->right->left = new Node(4);
root->right->right = new Node(3);

if(sym(root,root)){
    cout<<"Symmetric"<<endl;
}else
    cout<<"Not Symmetric"<<endl;
}
