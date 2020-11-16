#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long int ll;
 
int main() {
	 
 
	ll x,n;
	cin>>x>>n;
    x=x%10;
	ll sum;
	if(n==0)
	{
		cout<<x%10;
	}
	else if(n==1)
	{
		cout<<x%10;
	}
	else if(n==2)
	{
		sum=pow(x,2);
		cout<<sum%10;
	}
	else if(n==3)
	{
		sum=pow(x,6);
		cout<<sum%10;
	}
	else if(n==4)
	{
		sum=pow(x,4);
		cout<<sum%10;
	}
	else
	{
		cout<<"1";
	}
}