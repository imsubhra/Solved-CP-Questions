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

int MaxiNodes(Node* root){
  if(!root)
        return -1;
int countt=0,level=0,level_no=0,maxi=-1;
queue <Node*> q;
q.push(root);

while(1){
    int NodeCount = q.size();

    if(NodeCount==0)
        break;

    if(maxi<NodeCount){
        maxi=NodeCount;
        level_no=level;
    }

    while(NodeCount>0){
        root = q.front();
        q.pop();
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
            NodeCount--;
    }
    level++;
}
return level_no;
}

void printKdistance(Node* root, int k){
  if(!root)
    return;
int countt=0,level=0,level_no=0,maxi=-1;
queue <Node*> q;
q.push(root);

while(1){
    int NodeCount = q.size();

    if(NodeCount==0)
        break;

    if(k==level){
        while(NodeCount>0){
            root=q.front();
            q.pop();
            cout<<root->data<<" ";
            NodeCount--;
        }
        cout<<endl;
        break;
    }

    while(NodeCount>0){
    root = q.front();
    q.pop();
    if(root->left)
        q.push(root->left);
    if(root->right)
        q.push(root->right);
    NodeCount--;
    }
    level++;
    }
}


int main(){
Node* root = new Node(8);
root->left = new Node(3);
root->left->left = new Node(1);
root->right = new Node(10);
root->right->left = new Node(6);
root->right->right = new Node(14);
root->right->left->left = new Node(4);
root->right->left->right = new Node(7);
root->right->right->left = new Node(13);

int k;
//cout<<MaxiNodes(root);
cout<<"Enter The value of K :"<<endl;
cin>>k;

printKdistance(root,k);
}
