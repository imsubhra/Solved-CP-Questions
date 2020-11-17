#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node {
public:
    int data;
    Node *left,*right;

    Node(int x){
        data=x;
        left=right=NULL;
    }
};

bool isComp(Node *root){
    if(root==NULL)
        return 1;

    queue<Node *> q;
    q.push(root);
    bool f=1;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp==NULL && q.front()==NULL){
        continue;
        }
        if(temp==NULL && q.empty()==true){
            f=1;
            break;
        }else if(temp==NULL && q.empty()!=true ){
            f=0;
            break;
        }
        /*if(!temp->right && !temp->left && q.empty()==false)
            continue;*/
        /*else if(!temp->right && !temp->left && !q.empty()){
            f=0;
            break;
        }*/
        if(temp->left){
            q.push(temp->left);
        }else{
            q.push(NULL);
        }

        if(temp->right){
            q.push(temp->right);
        }else
            q.push(NULL);
    }

    if(f==1){
        return 1;
    }else
    return 0;

}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    //root->left->right = new Node(5);
    root->right->right = new Node(4);

    if(isComp(root)){
        cout<<"Complete BT"<<endl;
    }else{
        cout<<"Not Complete BT"<<endl;
    }
}
