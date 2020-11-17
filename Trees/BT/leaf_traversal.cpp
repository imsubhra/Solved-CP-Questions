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


void leafT(Node *root,vector <int> &v){
    if(root==NULL)
        return ;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->data);
        return ;
    }

    leafT(root->left,v);
    leafT(root->right,v);
}

int main(){
    Node* root1 = new Node(1);
    root1->left = new Node(4);
    root1->right = new Node(3);
    root1->left->left = new Node(8);
    root1->right->left = new Node(2);
    root1->right->right = new Node(9);

    Node* root2 = new Node(0);
    root2->left = new Node(2);
    root2->right = new Node(1);
    root2->right->right = new Node(9);
    root2->right->left = new Node(8);
    //root2->right->right = new Node(7);

    vector <int> v1,v2;
    leafT(root1,v1);
    leafT(root2,v2);
    if(v1.size()==v2.size()){
        bool f=0;
        for(ll i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                f=1;
                break;
            }
        }

        if(!f){
            cout<<"Same"<<endl;
        }else{
            cout<<"Not Same"<<endl;
        }
    }else{
        cout<<"Not Same"<<endl;
    }
}
