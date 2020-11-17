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

int sum(Node *root, int x){
if(root==NULL)
    return 0 ;

    queue <Node*> q;
    q.push(root);
    int summ=0;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(!temp->left && !temp->left)
        continue;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        if(temp->left->data==x || temp->right->data==x){
            summ+=temp->data;
        }
    }
    return summ;
}

/*void sum(Node *root,int x,int &s){
   if(root==NULL)return ;

   if((root->left->data==x && root->right)
      ||(root->left && root->right->data==x))
    s+=root->data;

   sum(root->left,x,s);
   sum(root->right,x,s);

}*/


int main(){
 Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(2);
    root->right->left = new Node(2);
    root->right->right = new Node(3);

    int x = 2,si;
    si=sum(root, x);
    cout<<si<<endl;
    return 0;
}
