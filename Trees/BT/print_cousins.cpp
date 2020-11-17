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

vector <Node *> Cnodes;
void printCousins(Node *root,int key){
if(root==NULL)
    return;
queue <Node*> q;
bool f=0;
q.push(root);q.push(NULL);
//cout<<q.empty()<<endl;
while(!q.empty()){
    Node *temp = q.front();
    q.pop();
    //cout<<temp->data<<endl;
    if(temp==NULL){
       if(f){
            f=0;
            return;
        }
        cout<<endl;
        if(q.empty()==false)
        q.push(NULL);
    }else{
    if(temp->data==key){
      f=1;
      cout<<1<<endl;
    }
     if(f){
            Cnodes.push_back(temp);
            //cout<<temp->data<<" ";
    }
    //if(temp!=NULL)cout<<temp->data<<" ";
    if(temp->left!=NULL){
        q.push(temp->left);
    }
    if(temp->right!=NULL){
        q.push(temp->right);
    }
    }
    //cout<<temp->data<<" "<<q.size()<<endl;

}
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(15);
    root->right->left = new Node(6);
    //root->right->right = new Node(7);
    root->right->left->right = new Node(8);

    printCousins(root,4);

    for(int i=1;i<Cnodes.size();i++){
        cout<<Cnodes[i]->data<<" ";
    }
    cout<<endl;
}
