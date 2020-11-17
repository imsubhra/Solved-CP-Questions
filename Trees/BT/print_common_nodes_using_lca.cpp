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

bool paths(Node *root, int n , vector<int> &path){
if(!root)
    return 0;
path.push_back(root->data);
if(root->data==n)
    return 1;

if((root->left && paths(root->left,n,path))||(root->right&&paths(
root->right,n,path)))
        return 1;

 path.pop_back();
 return 0;

}

int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
root->left->left->left = new Node(8);
root->right->left = new Node(6);
root->right->right = new Node(7);
root->right->left->right= new Node(9);
root->right->left->left = new Node(10);

int n1,n2;
cin>>n1>>n2;

vector <int> v1,v2;
if(paths(root,n1,v1)&&paths(root,n2,v2)){
    int i=0;
  /*  for(i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;*/
   for(i=0;i<v1.size();i++){
        if(v1[i]==v2[i])
            cout<<v1[i]<<" ";
        else
            break;
    }
}
}
