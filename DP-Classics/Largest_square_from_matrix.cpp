#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
#define ll long long int
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n,m;cin>>n>>m;
	    int mat[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>mat[i][j];
	        }
	    }
	    int dp[n][m];
	    int maxi=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(i==0||j==0){
	                dp[i][j]=mat[i][j];
	                maxi=max(dp[i][j],maxi);
	            }
	        }
	    }
	    for(int i=1;i<n;i++){
	        for(int j=1;j<m;j++){
	            if(mat[i][j]==1){
	                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
	                maxi=max(dp[i][j],maxi);
	            }
	            else{dp[i][j]=0;}
	        }
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
