#include<bits/stdc++.h>
using namespace std;
//recursive
int f(int n){
if(n<=1)return 1;

return f(n-1)+(n-1)*f(n-2);
}

int main(){
int n;cin>>n;
//cout<<f(n)<<endl;
int dp[n+1];
dp[1]=1,dp[2]=2;
for(int i=3;i<=n;i++){
    dp[i]=dp[i-1]+(i-1)*dp[i-2];
}
cout<<dp[n]<<endl;
}
