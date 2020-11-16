#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll counta=0;
        ll countb=0;
        if(a%9==0)
        {
		  counta+=a/9;
		 }
		 else
		 {
		  counta+=a/9+1;
		 }
		 if(b%9==0)
		 {
		            countb+=b/9;
		 }
		 else
		 {
		            countb+=b/9+1;
		 }
		  if(counta>=countb)
		  {
		      cout<<"1 "<<countb<<"\n";
		  }
		  else
		  {
		      cout<<"0 "<<counta<<"\n";
		  }
    }
}
