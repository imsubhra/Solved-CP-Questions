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

int height(Node *root){
if(root==NULL)
    return 0;

    int Ldepth = height(root->left);
    int Rdepth = height(root->right);

    return max(Ldepth,Rdepth)+1;

}


void SumHeightsNodes(Node *root,int &sum){
if(root==NULL) return ;

sum+=height(root);
//cout<<height(root)<<" ";
SumHeightsNodes(root->left,sum);
SumHeightsNodes(root->right,sum);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int sum=0;
    SumHeightsNodes(root,sum);
    cout<<sum<<endl;
}
