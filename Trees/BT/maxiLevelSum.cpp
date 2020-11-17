#include<bits/stdc++.h>
using namespace std;

class node
{
 public:
    int data;
    node *l;
    node *r;

node(int x){
data=x;
l=r=NULL;
}
};

int maxLevelSum(node *root){
if(!root)
    return 0;

 queue <node*> q;
 q.push(root);

 int NodeCount=0,maxi=-1,sum=0;

 while(!q.empty()){
    NodeCount =q.size();

    while(NodeCount>0){
        root = q.front();

        sum+=root->data;

        q.pop();

        if(root->l)
            q.push(root->l);
        if(root->r)
            q.push(root->r);

        NodeCount--;
    }

    maxi=max(sum,maxi);
    sum=0;
 }
 return maxi;
}


int minLeafSum(node *root){
if(!root)
    return 0;

 queue <node*> q;
 q.push(root);

 int NodeCount=0,f=0,sum=0;

 while(f==0){
    NodeCount =q.size();

    while(NodeCount--){
        node *temp = q.front();
        q.pop();

        if(temp->l==NULL && temp->r==NULL){
          sum+=temp->data;
          f=1;
        }
        else{
        if(temp->l)
            q.push(temp->l);
        if(temp->r)
            q.push(temp->r);
        }
    }
 }
 return sum;
}


int main(){
    node *root = new node(1);
    root->l = new node(2);
    root->r = new node(3);
    root->l->l = new node(4);
    root->l->r = new node(5);
    root->r->l = new node(6);
     root->r->r = new node(7);
     root->l->r->l = new node(8);
     root->r->l->r = new node(9);

   // cout<<maxLevelSum(root)<<endl;
    cout<< minLeafSum(root)<<endl;
}


