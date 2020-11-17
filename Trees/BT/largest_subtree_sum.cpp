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

int findLargestSubtree(Node* root,int &ans){
if(root==NULL)
    return 0;

    int currSum= root->data + findLargestSubtree(root->left,ans)+findLargestSubtree(root->right,ans);

    ans = max(ans,currSum);

    return currSum;
}

int findLargestSubtreeSum(Node *root){
if(root==NULL) return 0;

int ans = INT_MIN;

findLargestSubtree(root,ans);

return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(-2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(-6);
    root->right->right = new Node(2);

    cout << findLargestSubtreeSum(root);
    return 0;
}
