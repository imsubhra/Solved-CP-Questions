#include<bits/stdc++.h>
using namespace std;
//recursion
int recSum(int ar[],int n,int j){
if(n==0)return 0;
if(ar[j]>ar[n-1]){
    return max(ar[j]+recSum(ar,n-1,n-1),recSum(ar,n-1,j));
}else{
    return recSum(ar,n-1,j);
}
}

//DP code
int LCSsum(int ar[],int n){
        int dp[n];
        dp[0]=ar[0];

        for(int i=1;i<n;i++){
        dp[i]=ar[i];
        int maxi=0;
        for(int j=i-1;j>=0;j--){
        if(ar[i]<=ar[j])continue;
        else if(ar[i]>ar[j]){
            if(maxi<dp[j]){
                maxi=dp[j];
                }
            }
        }
        dp[i]+=maxi;
        }
         int maxi=INT_MIN;
        for(int i=0;i<n;i++){
        // cout<<dp[i]<<" ";
        maxi=max(dp[i],maxi);
        }
        //cout<<endl;
        return maxi;
        }
}


int main(){
int n;cin>>n;
/*
int ar[n+1];
ar[0]=0;
for(int i=1;i<=n;i++)cin>>ar[i];
int sumMax=0,mini=INT_MAX;
for(int i=n;i>=0;i--){
        mini=min(mini,ar[i]);
        int res = recSum(ar,i,i);
        cout<<res<<" ";
        sumMax=max(sumMax,res);
}cout<<endl;
cout<<sumMax<<endl;
*/

int ar[n];
for(int i=0;i<n;i++)cin>>ar[i];
int res = LCSsum(ar,n);
cout<<res<<endl;
}
