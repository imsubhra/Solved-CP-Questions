#include<bits/stdc++.h>
using namespace std;

bool sumPartition(int ar[],int sum,int n){
if(n==0 && sum!=0)
    return 0;
if(sum==0)
    return 1;

    if(ar[n-1]>sum)
        return sumPartition(ar,sum,n-1);

    else if(ar[n-1]<=sum)
        return sumPartition(ar,sum,n-1) || sumPartition(ar,sum-ar[n-1],n-1);
}

bool SumPartition(int ar[],int sum,int n){
bool dp[n+1][sum+1];

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
            dp[i][j] = dp[i-1][j] || dp[i-1][j-ar[i-1]];
    }
}

return dp[n][sum];
}

int main(){
int n;cin>>n;
int ar[n];
int sum=0;
for(int i=0;i<n;i++){
 cin>>ar[i];
 sum+=ar[i];
}
if(sum%2==1)
    cout<<0<<endl;
else{
      sum/=2;
 cout<<SumPartition(ar,sum,n)<<endl;
}
}
