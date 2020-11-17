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

int summ(Node* root){
if(!root)
    return 0;

return root->data + summ(root->left) + summ(root->right);
}

bool sumSubtree(Node* root,int sum){
if(!root)
    return 0;

  queue <Node*> q;
  q.push(root);
  while(!q.empty()){
    root=q.front();
    q.pop();

    int sum1 = summ(root);

    if(sum1==sum)
        return 1;

    if(root->left)
        q.push(root->left);
    if(root->right)
        q.push(root->right);
  }
  return 0;
}
//========Recursive Approach========================
//Main function
int sumSt(Node *root,int &sum,bool &f){
if(!root) return 0;

int summ = root->data + sumSt(root->left,sum,f) + sumSt(root->right,sum,f);
//cout<<summ<<endl;
if(summ==sum){
    f=1;
}

return summ;
}

//Util function
bool sumST(Node *root,int &sum){
if(root==NULL)return 0;
bool f=0;

int x = sumSt(root,sum,f);

return f;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int sum = 12;//No
    //int sum = 15;//Yes
    if (/*sumSubtree(root, sum)*/ sumST(root,sum))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
