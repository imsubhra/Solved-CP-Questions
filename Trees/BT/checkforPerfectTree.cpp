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


int maxdepth(Node *root){
if(!root)
    return 0;

    int depthL = maxdepth(root->left);
    int depthR = maxdepth(root->right);

    return max(depthL,depthR) + 1;
}


int countNodes(Node *root){
queue <Node*> q;

q.push(root);

int nodes=1;
while(!q.empty()){
    Node *temp = q.front();
    q.pop();
    if(temp->left){
        q.push(temp->left);
        nodes++;
    }
    if(temp->right){
        q.push(temp->right);
        nodes++;
    }
}
return nodes;
}

int main(){
    Node* root = NULL;
    root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    int depth = maxdepth(root);
    int nodes = countNodes(root);

    cout<<depth<<" "<<nodes;
    if(pow(2,depth)-1 == nodes)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
