#include<bits/stdc++.h>
using namespace std;

int prod_less_k(int ar[],int n,int k){
if(n==0)return 0;

if(ar[n-1]<=k && ar[n-1]>0){
    return (1+prod_less_k(ar,n-1,k/ar[n-1]))+(prod_less_k(ar,n-1,k));
}else{
    return prod_less_k(ar,n-1,k);
}
}

int prod_k(int ar[],int n,int k){
int dp[n+1][k+1];
for(int i=0;i<n+1;i++){
    for(int j=0;j<k+1;j++){
        if(i==0 || j==0)
            dp[i][j]=0;
    }
}
for(int i=1;i<n+1;i++){
    for(int j=1;j<k+1;j++){
        if(ar[i-1]<=j && ar[i-1]>0){
            dp[i][j] = (1+dp[i-1][j/ar[i-1]])+(dp[i-1][j]) ;
        }
        else if(ar[i-1]>j && ar[i-1]>0){
            dp[i][j]=dp[i-1][j];
        }
    }
}
return dp[n][k];
}

int main(){
int n;cin>>n;
int ar[n];
for(int i=0;i<n;i++)cin>>ar[i];
int k;cin>>k;
/*
//recursive
int cnt = prod_less_k(ar,n,k);
cout<<cnt<<endl;
*/
cout<<prod_k(ar,n,k)<<endl;
}
