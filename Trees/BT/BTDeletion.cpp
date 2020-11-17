#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    Node *right;
    Node *left;
    int data;

 Node(int x){
 data = x;
 right = NULL;
 left = NULL;
 }
};

void inorder(Node *root){
if(!root)
return ;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void deleteDeep(Node* root,Node* d_node){
    queue<Node*> q;
    q.push(root);
    Node *temp;
    while(!q.empty()){
         temp = q.front();
        q.pop();
        if(temp==d_node){
            temp=NULL;
            delete(d_node);
            return;
        }
        if(temp->right){
         if(temp->right==d_node){
            temp->right=NULL;
            delete(d_node);
            return;
         }else
         q.push(temp->right);
        }
        if(temp->left){
            if(temp->left==d_node){
                temp->left=NULL;
                delete(d_node);
                return;
            }else
            q.push(temp->left);
        }
    }
}


Node* deletion(Node *root, int key){
if(root==NULL)
    return NULL;
if(root->left==NULL && root->right==NULL){
    if(root->data==key)
        return NULL;
    else
        return root;
}
    Node *temp,*key_node=NULL;  //temp stores the deepest right most node
    queue <Node*> q;            // key_node stores the element to delete
    q.push(root);
    while(!q.empty()){
     temp = q.front();
    q.pop();
    if(temp->data==key){
        key_node = temp;
    }
    if(temp->right)
        q.push(temp->right);
    if(temp->left)
        q.push(temp->left);

    }

    if(key_node){
        int x = temp->data;
        deleteDeep(root,temp);
       key_node->data=x;
    }
    return root;
}

int main(){
Node* root = new Node(10);
root->left = new Node(11);
root->left->left =new Node(7);
root->left->right =new Node(12);
root->right =new Node(9);
root->right->left =new Node(15);
root->right->right =new Node(8);

inorder(root);
int key=11;
root = deletion(root,key);

cout<<endl;
inorder(root);

}
