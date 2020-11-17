#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>

string longestPalindrome(string s){
int n=s.length();
bool dp[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(i==j)
    dp[i][j]=1;
    else dp[i][j]=0;
    }
}
string res="";
ll maxi=-1;
for(int i=n-1;i>=0;i--){
    for(int j=i+1;j<n;j++){
        if(s[i]==s[j] && (dp[i+1][j-1]==1 || j-i==1)){
            dp[i][j]=1;
        }else dp[i][j]=0;

        if(dp[i][j]==1){
            if(maxi<j-i+1){
            maxi=j-i+1;
            res = s.substr(i,maxi);
            }
        }
    }
}
return res;
}


int main(){
string s;cin>>s;
cout<<longestPalindrome(s)<<endl;
}
