#include<bits/stdc++.h>
using namespace std;

int countSubset(int ar[],int n ,int sum){

int dp[n+1][sum+1];

for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
        if(i==0)
            dp[i][j]=0;
        if(j==0)
            dp[i][j]=1;
    }
}

for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
        if(ar[i-1]>j)
            dp[i][j] = dp[i-1][j];

        else if(ar[i-1]<=j)
            dp[i][j] = dp[i-1][j]+dp[i-1][j-ar[i-1]];
    }
}

return dp[n][sum];
}

int main(){
int n;cin>>n;
int ar[n],sum=0;
for(int i=0;i<n;i++){
  cin>>ar[i];
  sum+=ar[i];
}
int diff;cin>>diff;
int s1 = (sum+diff)/2;
cout<<countSubset(ar,n,s1);
}
