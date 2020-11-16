/*
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other.
In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.

Example 1:

Input: N = 6
arr[] = [0900  0940 0950  1100 1500 1800]
dep[] = [0910 1200 1120 1130 1900 2000]
Output: 3
Explanation:
Minimum 3 platforms are required to
safely arrive and depart all trains.
Example 2:

Input: N = 3
arr[] = [0900 1100 1235]
dep[] = [1000 1200 1240]
Output: 1
Explanation: Only 1 platform is required to
safely manage the arrival and departure
of all trains.
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
	    ll a[n],b[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(ll i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    ll count=0;
	    ll i=0,j=0,ans=0;
	    while(i<n)
	    {
	        if(a[i]<=b[j])
	        {
	            i++;
	            count++;
	        }
	        else
	        {
	            count--;
	            j++;
	        }
	        ans=max(ans,count);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
