#include<bits/stdc++.h>
using namespace std;

int cutting(int p[],int l[],int len,int n){
int dp[n+1][len+1];

for(int i=0;i<n+1;i++){
    for(int j=0;j<len+1;j++){
        if(i==0 || j==0)
            dp[i][j]=0;
    }
}


for(int i=1;i<n+1;i++){
    for(int j=1;j<len+1;j++){
        if(l[i-1]>j)
            dp[i][j]=dp[i-1][j];
        else if(l[i-1]<=j)
            dp[i][j]= max( dp[i-1][j] , l[i-1]+dp[i][j-p[i-1]]);
}
}

return dp[n][len];
}

int main(){
int t;cin>>t;
while(t){
    int n;cin>>n;
    int p[3];
    for(int i=0;i<3;i++)
        cin>>p[i];
    int l[3];
    for(int i=0;i<3;i++)
       l[i]=1;
    int len = n;
    cout<<cutting(p,l,n,3)<<endl;
    t--;
}
}
