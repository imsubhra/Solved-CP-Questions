#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node *right,*left;

Node(int x){
data=x;
right=left=NULL;
}
};

void LeftView(Node *root){
if (root == NULL)
return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();

        if (temp) {
           cout<<temp->data<<" ";
            while (q.front() != NULL) {
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
                q.pop();

                temp = q.front();
            }
            q.push(NULL);
        }
        q.pop();
    }
}

int main(){
    Node *root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->right = new Node(8);

    int max_level=0;
    LeftView(root);

}

