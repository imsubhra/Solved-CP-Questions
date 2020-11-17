#include<bits/stdc++.h>
using namespace std;

int LCS(string str1,string str2,int n,int m){
if(n==0 || m==0)
    return 0;

    if(str1[n-1]==str2[m-1])
        return 1 + LCS(str1,str2,n-1,m-1);

    else
        return max(LCS(str1,str2,n,m-1),LCS(str1,str2,n-1,m));
}

//top-down(Memoization)
int static dp[10001][10001];
void initialise(){
memset(dp,-1,sizeof(dp));
}


int Lcs(string str1,string str2,int n,int m){
if(n==0 || m==0)
return 0;

if(dp[n][m]!=-1)
    return dp[n][m];

  if(str1[n-1]==str2[m-1])
        return dp[n][m] = 1 + Lcs(str1,str2,n-1,m-1);
  else
    return dp[n][m] = max(Lcs(str1,str2,n,m-1),Lcs(str1,str2,n-1,m));

}


//bottom-up dp(Tabulation)
int lcs(string str1,string str2,int n,int m){
int dp[n+1][m+1];

for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
        if(i==0 || j==0)
            dp[i][j]=0;
    }
}

for(int i=1;i<n+1;i++){
    for(int j=1;j<m+1;j++){
        if(str1[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
        else
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    }
}

return dp[n][m];
}

int main(){
int t;
cin>>t;
while(t){
    initialise();
    string str1,str2;
    cin>>str1;
    cin>>str2;
    cout<<Lcs(str1,str2,str1.length(),str2.length())<<endl;
    --t;
}
}
