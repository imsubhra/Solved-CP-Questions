/*
Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:

Input:
N = 10
A[] = {1,2,3,4,5,6,7,8,10}
Output: 9
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n],sum=0,sum1=0;
	    for(ll i=1;i<=n-1;i++)
	    {
	        cin>>a[i];
	        sum1+=a[i];
	    }
	    for(ll i=1;i<=n;i++)
	    {
	        sum+=i;
	    }
	    cout<<sum-sum1<<"\n";
	}
	return 0;
}
