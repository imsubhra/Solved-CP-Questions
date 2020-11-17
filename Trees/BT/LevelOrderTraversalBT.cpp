#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
    data = x;
    right = left =NULL;
    }
};

int depth(Node *root){
if(!root)
    return 0;
else {
    int depthL = depth(root->left);
    int depthR = depth(root->right);

    return max(depthL,depthR)+1;
}

}

void printLevelOrder(Node *root , int level){
if(!root)
    return ;
if(level==1)
    cout<<root->data<<" ";
else {
    printLevelOrder(root->left,level-1);
    printLevelOrder(root->right,level-1);
}
}

void LevelOrder(Node *root){
int h = depth(root);
for(int i=1;i<=h;i++)
    printLevelOrder(root,i);
}

int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->left->left = new Node(4);
root->right = new Node(3);
root->left->right = new Node(5);

LevelOrder(root);
}
