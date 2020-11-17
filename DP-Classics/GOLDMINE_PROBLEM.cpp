#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int n,m;cin>>n>>m;
int gold[n][m];
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>gold[i][j];
    }
}
int dp[n][m];
ll rightup=0,rightdown=0,straight=0;
for(ll i=0;i<n;i++)dp[i][m-1]=gold[i][m-1];
for(ll i=m-2;i>=0;i--){
    for(ll j=0;j<n;j++){
        if(j==0)rightup=0;
        else rightup=dp[j-1][i+1];
        if(j==n-1)rightdown=0;
        else rightdown=dp[j+1][i+1];
        straight=dp[j][i+1];
        dp[j][i]=gold[j][i]+max(max(rightdown,rightup),straight);
        //cout<<max(max(rightdown,rightup),straight)<<" "<<dp[j][i]<<endl;
    }
    rightup=0,rightdown=0,straight=0;
}
int maxi=INT_MIN;
for(ll i=0;i<n;i++){
 maxi=max(dp[i][0],maxi);
}
cout<<maxi<<endl;
}
