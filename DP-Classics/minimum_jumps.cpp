#include<bits/stdc++.h>
using namespace std;
int mini=INT_MAX;
int minJumps(int ar[],int j,int n){
    if(j>=n)return 0;
    for(int i=1;i<=ar[n];i++){
       int res = minJumps(ar,j+1,n+1) + 1 ;
       mini=min(res,mini);
    }
    return mini;
}

int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int jumps = minJumps(ar,0,n);
    cout<<jumps<<endl;
}
}
