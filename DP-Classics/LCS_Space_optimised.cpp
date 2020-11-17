#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int n1,int n2){

int dp[2][n1+1];

for(int i=0;i<2;i++){
    for(int j=0;j<n1+1;j++){
        if(i==0 || j==0)
            dp[i][j]=0;
    }
}

for(int j=1;j<n2+1;j++){
   for(int i=1;i<n1+1;i++){
        if(s1[i-1]==s2[j-1]){
            dp[1][i]=dp[0][i-1]+1;
        }else{
            dp[1][i]=max(dp[0][i],dp[1][i-1]);
        }
        //cout<<dp[1][i]<<" ";
   }
   //cout<<endl;
   for(int k=0;k<n1+1;k++){
    dp[0][k]=dp[1][k];
   }
}
return dp[1][n1];
}

int main(){
int t;cin>>t;
while(t--){
    string s1,s2;cin>>s1>>s2;
    int len = LCS(s1,s2,s1.length(),s2.length());
    cout<<len<<endl;
}
}
