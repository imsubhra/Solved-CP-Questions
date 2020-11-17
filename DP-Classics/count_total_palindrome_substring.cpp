#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>

//memoization
int dp[1001][1001];
void initialise(){
memset(dp,-1,sizeof(dp));
}


int checker(string s,int l,int r){
if(l==r || (s[l]==s[r] && r-l==1))return 1;
if(dp[l][r]!=-1)return dp[l][r];
if(s[l]==s[r]){return dp[l][r] = checker(s,l+1,r-1);}
else return 0;
}

int NoPalin(string s){
    int cnt=0,n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cnt+=checker(s,i,j);
        }
    }
    return cnt;
}

//dp-tabulation
 int countSubstrings(string s) {
       int n = s.length();
       int dp[n][n];
       for(int i=0;i<n;i++)dp[i][i]=1;
       int cnt=n;
       //check from back to find palindrome
       // Cases -
       //  i)-> if 1 character ->Palindrome
       //  ii)-> if s[start]==s[end]-> check if s[start+1]== s[end-1] .... continue soon

       for(int i=n-1;i>=0;i--){
           for(int j=i+1;j<n;j++){
               if(s[i]==s[j]){
                   if(j==i+1){
                       dp[i][j]=1;
                   }else
                   dp[i][j]=dp[i+1][j-1];
               }else dp[i][j]=0;
               cnt+=dp[i][j];
           }
       }
       return cnt;
    }


int main(){
int t;cin>>t;
while(t--){
    initialise();
    string s;cin>>s;
    cout<<NoPalin(s)<<endl;
}
}
