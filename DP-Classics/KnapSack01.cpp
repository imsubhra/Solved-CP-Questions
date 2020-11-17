#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

//Recursive soln
int knapsack(int val[],int wt[],int w,int n){
if(n==0 || w==0)
    return 0;

    if(w>wt[n-1])//Not consider it in knapsack
 return max(val[n-1]+knapsack(val,wt,w-wt[n-1],n-1)
                   ,knapsack(val,wt,w,n-1));

    else if(w<=wt[n-1])//if weight is less then weight of knapsack
          return knapsack(val,wt,w,n-1);
        //either it can be considered or not
}

//memoization dp
int dp[10001][10001];
void initialise(){
for(int i=0;i<10001;i++){
    for(int j=0;j<10001;j++){
        dp[i][j]=-1;
    }
}
}
int Knapsack(int val[],int wt[],int w,int n){
if(n==0 || w==0)
return 0;
if(dp[n][w]!=-1)
return dp[n][w];

if(wt[n-1]>w){
    return dp[n][w] = Knapsack(val,wt,w,n-1);
}
else if(wt[n-1]<=w){
    return dp[n][w] = max(val[n-1]+Knapsack(val,wt,w-wt[n-1],n-1),Knapsack(val,wt,w,n-1));
}

}

//Tabulation method dp
int KnapSack(int val[],int wt[],int w,int n){
int dp[n+1][w+1];

for(int i=0;i<=n;i++){
    for(int j=0;j<=w;j++){
        if(i==0 || j==0)
            dp[i][j]=0;
    }
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=w;j++){
       if(wt[i-1]<=j){
        dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
       }
       else if(wt[i-1]>j){
        dp[i][j] = dp[i-1][j];
       }
    }
}

return dp[n][w];
}

int main(){
int t;cin>>t;
//initialise();
while(t){
 int n;cin>>n;
 int w;cin>>w;
 int val[n];
 for(int i=0;i<n;i++)
    cin>>val[i];
 int wt[n];
 for(int i=0;i<n;i++)
    cin>>wt[i];

 cout<<KnapSack(val,wt,w,n)<<endl;
 --t;
}
}

