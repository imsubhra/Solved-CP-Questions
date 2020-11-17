#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

Node(int x){
    data = x;
    left = right = NULL ;
}
};

int sumT(Node *root){
    if(root==NULL)
        return 0;
    return sumT(root->right)+sumT(root->left)+root->data ;
}

bool coverSum(Node *root){
    if(root==NULL)
        return 1;

    queue<Node *> q;
    q.push(root);
    int sum1=root->data,sum2=0;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp->left && temp->right){
            sum1+=temp->left->data;
            q.push(temp->left);
        }
        else if(temp->left!=NULL){
            sum1+=temp->left->data;
            q.push(temp->left);
        }else if(temp->right!=NULL){
            sum1+=temp->right->data;
            q.push(temp->right);
        }
    }
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp->left && temp->right){
            sum2+=temp->right->data;
            q.push(temp->right);
        }
        else if(temp->right!=NULL){
            sum2+=temp->right->data;
            q.push(temp->right);
        }else if(temp->left!=NULL){
            sum2+=temp->left->data;
            q.push(temp->left);
        }
    }

   int tsum = sumT(root);
   if(tsum == 2 * (sum1 + sum2))
    return 1;

   return 0;

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

    if(coverSum(temp)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
