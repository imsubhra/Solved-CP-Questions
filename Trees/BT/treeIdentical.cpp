#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *right,*left;

Node(int x){
data=x;
left=right=NULL;
}
};

vector <int> v1,v2;

void order1(Node *root){
   if(!root)
    return ;

   order1(root->left);
   v1.push_back(root->data);
   order1(root->right);
}

void order2(Node *root){
   if(!root)
    return ;

   order2(root->left);
   v2.push_back(root->data);
   order2(root->right);
}


bool identicalTrees(Node *root1, Node *root2){
order1(root1);
order2(root2);

for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;

for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}
cout<<endl;

if(v1.size()==v2.size()){
 int n=v1.size();
for(int i=0;i<n;i++){
    if(v1[i]!=v2[i])
        return false;
}
}else{
return false;
}
return true;
}

int main(){
    Node *root1 = new Node(1);
    Node *root2 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(5);
    root2->left->right = new Node(5);

    if(identicalTrees(root1, root2))
        cout << "Both tree are identical.";
    else
        cout << "Trees are not identical.";

return 0;
}
