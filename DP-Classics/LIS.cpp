#include<bits/stdc++.h>
using namespace std;

int LIS(int ar[],int n){
int dp[n];
dp[0]=1;
for(int i=1;i<n;i++){
    dp[i]=1;
    for(int j=i-1;j>=0;j--){
        if(ar[j]>ar[i])continue;
        int res = 1 + dp[j];
        if(res>dp[i])
            dp[i]=res;
    }
}
int maxx=INT_MIN;
for(int i=0;i<n;i++){
    if(maxx<dp[i])
        maxx=dp[i];
}
return maxx;
}

//Recursive
int LISRec(int ar[],int n,int j){
if(n==0 || j==0)return 0;

if(ar[j]>ar[n-1])
    return max(1 + LISRec(ar,n-1,n-1),LISRec(ar,n-1,j));
else if(ar[j]<ar[n-1])
    return LISRec(ar,n-1,j);
}

int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int ar[n];
for(int i=0;i<n;i++)cin>>ar[i];
//Recursive code - wrapper
int ans=0;
for(int i=n-1;i>=0;i--){
    int res = 1 + LISRec(ar,i,i);
    //cout<<res<<endl;
    ans=max(res,ans);
}
cout<<ans<<endl;

//Dp code - wrapper
/*int ans = LIS(ar,n);
cout<<ans<<endl;*/
}
}
