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


bool checkPre(int arr[],int n){

stack <int> s;
int mini =INT_MIN;
int i;
for(i=0;i<n;i++){

    if(mini>arr[i])
        return false;

    while(!s.empty() && i!=n){
        mini = s.top();
        s.pop();
    }
    s.push(arr[i]);
}

if(i==n)
    return true;
}

int main(){
int n;cin>>n;

int ar[n];

for(int i=0;i<n;i++)
    cin>>ar[i];

if(checkPre(ar,n))
    cout<<1<<endl;
else
    cout<<0<<endl;
}
