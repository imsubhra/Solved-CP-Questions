#include<bits/stdc++.h>
using namespace std;

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
            dp[i][j]=0;
    }
}

int maxi=-1;
for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
        if(dp[i][j]>maxi)
            maxi = dp[i][j];
    }
}

return maxi;
}

int main(){
int t;
cin>>t;
while(t){
    string str1,str2;
    int n,m;
    cin>>n>>m;
    cin>>str1;
    cin>>str2;
    cout<<lcs(str1,str2,str1.length(),str2.length())<<endl;
    --t;
}
}

