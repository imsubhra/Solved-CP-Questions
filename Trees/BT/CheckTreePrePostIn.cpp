#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* right,*left;

    Node(int x){
    data=x;
    left=right=NULL;
    }
};

int preIndex=0;
Node* buildTree(int in[],int pre[],int start,int endd){

if(start>endd)
    return NULL;

Node *tnode = new Node(pre[preIndex]);
preIndex++;

if(start==endd)
        return tnode;

int i;
for( i=start;i<=endd;i++){
    if(tnode->data == in[i])
        break;
}

        tnode->left = buildTree(in,pre,start,i-1);
        tnode->right = buildTree(in,pre,i+1,endd);

return tnode;
}


vector <int> v;
void postorder(Node *root){
if(!root)
    return ;

    postorder(root->left);
    postorder(root->right);
    v.push_back(root->data);
}

int main(){
    int inOrder[] = {4, 2, 5, 1, 3};
    int preOrder[] = {1, 2, 4, 5, 3};
    int postOrder[] = {4, 1, 2, 3, 5};
    int len = 5;
    Node *root = buildTree(inOrder, preOrder, 0, len - 1);


    postorder(root);

    bool flag=1;

    for(int i=0;i<len;i++){
        if(v[i]!=postOrder[i]){
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"Yes"<<endl;
    }else{
    cout<<"no"<<endl;
    }
    return 0;
}

