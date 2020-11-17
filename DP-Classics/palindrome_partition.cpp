#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

bool palin(string s,int i,int j){
while(i<j){
    if(s[i]!=s[j])
        return 0;
    i++,j--;
}
return 1;
}

int pp(string s,int i,int j){
if(i>=j)
    return 0;
if(palin(s,i,j))
    return 0;
int ans = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int left,right;

        if(dp[i][k]!=-1){
            left=dp[i][k];
        }else{
        left = pp(s,i,k);
        dp[i][k]=left;
        }

        if(dp[k+1][j]!=-1){
            right=dp[k+1][j];
        }else{
        right = pp(s,k+1,j);
        dp[k+1][j]=right;
        }

        int temp=left+right+1;
        ans = min(temp,ans);
    }

    return ans;
}


//memoization dp
int PP(string s,int i,int j){
if(i>=j || palin(s,i,j))
    return 0;

if(dp[i][j]!=-1)
        return dp[i][j];

    int ans = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=PP(s,i,k)+PP(s,k+1,j)+1;
        ans = min(temp,ans);
    }

    return dp[i][j] = ans;
}

int main(){
int t;cin>>t;
while(t){
    string str;
    cin>>str;
    memset(dp,-1,sizeof(dp));
    cout<<PP(str,0,str.length()-1)<<endl;
    --t;
}
}
