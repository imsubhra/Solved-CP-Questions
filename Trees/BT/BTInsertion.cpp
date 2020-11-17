#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *right;
Node *left;
};

Node* newNode(int x){
Node *node = new Node();
node->data = x;
node->left = NULL;
node->right = NULL;
return node;
}

void inorder(Node* root){
 if(!root)
   return ;

 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);

}

void Insert(Node* root,int key){
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(!temp->left){
            temp->left = newNode(key);
            break;
        }else{
        q.push(temp->left);
        }
        if(!temp->right){
            temp->right = newNode(key);
            break;
        }else{
        q.push(temp->right);
        }
    }
}

int main(){
Node* root = newNode(10);
root->left = newNode(11);
root->right = newNode(9);
root->left->left = newNode(7);
root->right->right = newNode(8);
root->right->left = newNode(15);


inorder(root);
cout<<"\nEnter the key You want to insert: ";
int key;cin>>key;
cout<<"\n";
Insert(root,key);

inorder(root);
}
