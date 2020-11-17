#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

Node(int x){
data=x;
left=right=NULL;
}
};


//Iterative Approach
int sumofLeftLeaves(Node *root){
    if(root == NULL)
        return 0;
    stack<Node*> stack_;
    stack_.push(root);
    int sum=0;
    while(stack_.size() > 0)
    {
        Node* currentNode = stack_.top();
        stack_.pop();
        if (currentNode->left != NULL)
        {
            stack_.push(currentNode->left);
            if(currentNode->left->left == NULL && currentNode->left->right == NULL)
            {
                sum = sum + currentNode->left->data ;
            }
        }
        if (currentNode->right != NULL)
            stack_.push(currentNode->right);
    }

    return sum;
}

//Recursive Approach for left leaves
void sumofleftLeavesR(Node *root , int &sl,bool f){
if(root==NULL) return ;

if(!root->left && !root->right && !f)
    sl+=root->data;

    sumofleftLeavesR(root->left,sl,0);
    sumofleftLeavesR(root->right,sl,1);
}

//============================================================

//Iterative Approach for Sum of Right Leaves
int sumofRightLeaves(Node *root){
    if(root == NULL)
        return 0;
    stack<Node*> stack_;
    stack_.push(root);
    int sum=0;
    while(stack_.size() > 0)
    {
        Node* currentNode = stack_.top();
        stack_.pop();
        if (currentNode->right != NULL)
        {
            stack_.push(currentNode->right);
            if(currentNode->right->left == NULL && currentNode->right->right == NULL)
            {
                sum = sum + currentNode->right->data ;
            }
        }
        if (currentNode->left != NULL)
            stack_.push(currentNode->left);
    }

    return sum;
}

//Recursive Approach for Right Leaves
void sumofrightLeavesR(Node *root , int &sl,bool f){
if(root==NULL) return ;

if(!root->left && !root->right && !f){
    sl+=root->data;
    //cout<<root->data<<" ";
}

    sumofrightLeavesR(root->left,sl,1);
    sumofrightLeavesR(root->right,sl,0);
}

//=========================================================

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(8);
    root->right->right->left  = new Node(6);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->right  = new Node(2);
    root->right->right->right  = new Node(7);
   //cout<<sumofLeftLeaves(root);
   //cout<<sumofRightLeaves(root);
    int sl=0;
    bool f=1;//for right leaves
    //bool f=0; //for left leaves
    sumofrightLeavesR(root,sl,f);
    cout<<sl<<endl;
}
