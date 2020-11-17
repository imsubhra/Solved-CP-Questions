#include<bits/stdc++.h>
using namespace std;
int dp[101][101];

//recursive
int MCM(int ar[],int i,int j){
if(i>=j)
    return 0;

 int mini=INT_MAX;

for(int k=i;k<=j-1;k++){
int tempans = MCM(ar,i,k)+MCM(ar,k+1,j)+ar[i-1]*ar[k]*ar[j];

if(mini>tempans)
    mini=tempans;

}

 return mini;
}


//top down dp
int mcm(int ar[],int i,int j){
if(i>=j)
    return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int mini=INT_MAX;

    for(int k=i;k<=j-1;k++){
        int tempAns = mcm(ar,i,k)+mcm(ar,k+1,j)+ar[i-1]*ar[k]*ar[j];
        if(mini>tempAns)
            mini=tempAns;
    }

    return dp[i][j]=mini;
}

int main(){
int n;cin>>n;
int ar[n];
memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++)
    cin>>ar[i];

cout<<mcm(ar,1,n-1)<<endl;
//cout<<MCM(ar,1,n-1);
}
