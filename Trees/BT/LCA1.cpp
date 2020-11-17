#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

Node(int x){
data = x;
left=right=NULL;
}

};


bool rootToNodePath(Node *root, int n1 , vector<int> &v){
if(!root)
    return 0;

    v.push_back(root->data);
    if(root->data == n1)
    return 1;

    if((root->left&&rootToNodePath(root->left,n1,v))||(root->right
    && rootToNodePath(root->right,n1,v)))
        return 1;

    v.pop_back();
    return 0;
}


int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left =new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);

Node *r1=root,*r2=root;
int n1,n2;cin>>n1>>n2;

vector <int> v1,v2;


if(rootToNodePath(root,n1,v1) && rootToNodePath(root,n2,v2)){

       int i=0;
    for(i=0;i<v1.size()&&i<v2.size();i++){
        if(v1[i]!=v2[i])
            break;
    }
    cout<<v1[i-1]<<endl;

}
else
    cout<<-1<<endl;
}
