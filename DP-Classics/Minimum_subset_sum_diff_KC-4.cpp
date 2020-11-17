#include<bits/stdc++.h>
using namespace std;

void subset(int ar[],int n ,int sum,vector<int> &v){
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

for(int j=1;j<=(sum)/2;j++){
    if(dp[n][j]==1)
        v.push_back(j);
}
}


int helper(int ar[],int n){
int sum=0;
for(int i=0;i<n;i++)
    sum+=ar[i];

vector<int> v;
subset(ar,n,sum,v);

int mn = INT_MAX;

for(int i=0;i<v.size();i++){
    if(mn>sum-2*v[i]){
        mn = sum-2*v[i];
    }
}
 return mn;
}

int main(){
int t;cin>>t;
while(t){
    int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];

cout<<helper(ar,n)<<endl;
t--;
}
}
