#include<bits/stdc++.h>
using namespace std;

//recursive soln
int subsetcount(int ar[],int sum,int n){
if(sum==0)
    return 1;
if(sum!=0 && n==0)
    return 0;

    if(sum<ar[n-1])
        return subsetcount(ar,sum,n-1);

    else if(sum>=ar[n-1])
        return subsetcount(ar,sum,n-1)+subsetcount(ar,sum-ar[n-1],n-1);
}

//tabulation dp soln;
int SubsetCount(int ar[],int sum,int n){

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
        if(j<ar[i-1])
            dp[i][j] = dp[i-1][j];
        else if(j>=ar[i-1])
            dp[i][j] = dp[i-1][j] + dp[i-1][j-ar[i-1]];
    }
}


return dp[n][sum];
}

int main(){
int n;cin>>n;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];
int sum;cin>>sum;
    cout<<SubsetCount(ar,sum,n)<<endl;
    //cout<<subset(ar,sum,n)<<endl;
}
