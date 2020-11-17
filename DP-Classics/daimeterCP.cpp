#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *l;
    Node *r;

Node(int x){
    data = x;
    l = NULL;
    r = NULL;
}

};

int hei(Node *node){
if(node==NULL)
    return 0;

    int rh=hei(node->l);
    int lh=hei(node->r);

    int x=max(rh,lh);
    return x+1;
}


int dai(Node *node){
    if(node==NULL)
        return 0;
    int lh = hei(node->l);
    int rh = hei(node->r);

    int ld=dai(node->l);
    int rd=dai(node->r);

    return max(lh+rh+1,max(ld,rd));
}



int main() {
int n,m;
cin>>n>>m;
n--;
Node *start=new Node(m);
Node* ptr;
while(n--){
string str;
cin>>str>>m;
ptr=start;
int i=0;
while(i!=str.length() && ptr)
{
if(str[i]=='L'){
if(ptr->l==NULL)
ptr->l=new Node(0);
ptr=ptr->l;
}
else
{
if(ptr->r==NULL)
ptr->r=new Node(0);
ptr=ptr->r;
}
i++;
}
ptr->data=m;
}
int ans=dai(start);
cout<<ans<<endl;
return 0;
}
