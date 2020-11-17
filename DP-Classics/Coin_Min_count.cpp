#include<bits/stdc++.h>
using namespace std;

int coinNum(int coins[],int sum ,int n){
    int dp[n+1][sum+1];

    for(int i=0;i<sum+1;i++)
        dp[0][i]=INT_MAX-1;
    for(int i=0;i<n+1;i++)
        dp[i][0]=0;


    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j)
            dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            else if(coins[i-1]>j)
            dp[i][j] = dp[i-1][j];
        }
    }

    if(dp[n][sum]==INT_MAX-1)return -1;
    else
    return dp[n][sum];
}

int main()
 {
	//code
	int t;cin>>t;
	while(t){
	    int n;cin>>n;
	    int coins[n];
	    for(int i=0;i<n;i++)
            cin>>coins[i];
        int cents;cin>>cents;
	    cout<<coinNum(coins,cents,n)<<endl;
	    --t;
	}
}
