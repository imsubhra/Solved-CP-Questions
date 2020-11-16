#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
      ll n,k,sum1=0,sum2=0,r=0,up=0;
	  cin>>n>>k;
      sum1=(n*(n+1))/2;
	  r=k;
	  while(r<=n)
	  {
       up=int(n/r);
	   sum1=sum1-(k-1)*(up*(up+1))/2;
	   r*=k;
	  }
	  
		cout<<sum1<<"\n";
 
	}
 return 0; 
	}