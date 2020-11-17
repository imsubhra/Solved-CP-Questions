#include<bits/stdc++.h>
using namespace std;

class NodeL{
public:
    int data;
    NodeL* next;
};

class NodeBT{
public:
    int data;
    NodeBT* right, *left;

NodeBT(int x){
data = x;
right=left=NULL;
}
};


NodeBT* ConstructTree(NodeL *head, NodeBT *root){
if(head==NULL){
root=NULL;
return root;
}

queue <NodeBT*> q;

root = new NodeBT(head->data);

q.push(root);

head=head->next;

while(head){

    NodeBT* parent = q.front();
    q.pop();

    NodeBT *leftChild = NULL, *rightChild = NULL ;
    if(head){
        leftChild = new NodeBT(head->data);
        q.push(leftChild);
        head = head->next;
    }

    if(head){
        rightChild = new NodeBT(head->data);
        q.push(rightChild);
        head=head->next;
    }

    parent->left = leftChild;
    parent->right = rightChild;
}

return root;
}

void InOrder(NodeBT* root){
if(!root)
    return ;

   InOrder(root->left);
   cout<<root->data<<" ";
   InOrder(root->right);
}


void push(NodeL** head_ref,int key){
NodeL *node = new NodeL;
node->data = key;
node->next = *head_ref;
*head_ref=node;
}

int main(){
NodeL* head = NULL;

push(&head,36);
push(&head,30);
push(&head,25);
push(&head,15);
push(&head,12);
push(&head,10);

NodeBT* root;
  NodeBT* temp = ConstructTree(head,root);

InOrder(temp);
}
