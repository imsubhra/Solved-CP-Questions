#include<bits/stdc++.h>
using namespace std;

int coinNum(int ar[],int sum ,int n){
    int dp[n+1][sum+1];

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
            if(ar[i-1]<=j)
            dp[i][j] = (dp[i-1][j]+dp[i][j-ar[i-1]]);
            else if(ar[i-1]>j)
            dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}

int main()
 {
	//code
	int t;cin>>t;
	while(t){
	    int n;cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
            cin>>ar[i];
        int cents;cin>>cents;
	    cout<<coinNum(ar,cents,n)<<endl;
	    --t;
	}
}

