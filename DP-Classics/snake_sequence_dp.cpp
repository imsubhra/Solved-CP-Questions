#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mat[10001][10001];

//Recursive
ll recSnakeSeq(int r,int c){
if(r<0 || c<0)
    return 0;
int l = 1 + recSnakeSeq(r,c-1);
int u = 1 + recSnakeSeq(r-1,c);

return max(l,u);
}


int main(){
int n,m;cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
}

//Recursive
/*ll maxiSum=0;
for(int i=0;i<m;i++){
    ll sum=1;
    sum+=recSnakeSeq(n-2,i);
    if(sum>maxiSum)
        maxiSum=sum;
}
cout<<maxiSum<<endl;
*/

//dp code
ll dp[n][m];
memset(dp,0,sizeof(dp));
vector <ll> maxi;
ll maxxi=0,j;
for(ll k=0;k<m;k++){
    j=n-1;
    ll i=k;
    vector <ll> ans;
    dp[j][i]=mat[j][i];
     ans.push_back(dp[j][i]);
    while(i>=0 && j>0){
        if(i==0){
            dp[j-1][i]=mat[j-1][i];
            ans.push_back(dp[j-1][i]);
            j--;
        }else{
            if(mat[j-1][i]>mat[j][i-1]){
              dp[j-1][i]=mat[j-1][i];
            ans.push_back(dp[j-1][i]);
            j--;
            }else{
             dp[j][i-1]=mat[j][i-1];
            ans.push_back(dp[j][i-1]);
            i--;
            }
        }
    }
    if(maxxi<ans.size()){
        maxi=ans;
        maxxi=ans.size();
    }
    ans.clear();
    memset(dp,0,sizeof(dp));
}
ll x=maxi.size()-1;
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        if(mat[i][j]==maxi[x]){
            cout<<mat[i][j]<<"--> ( "<<i<<","<<j<<" )"<<endl;
            x--;
        }
    }
}
cout<<endl;
}
