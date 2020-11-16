#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	   long long n,sum=0;
	   cin>>n;
	   int arr[n];
	   
	   for(int i=0;i<n;i++)
	   cin>>arr[i];
	   
	   sort(arr,arr+n,greater<int>());
	   
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]-i<=0)
	       break;
	       
	       else
	       {
	       sum=sum+arr[i]-i;
	       }
	       
	   }
	   cout<<sum%1000000007<<"\n";
	}
	return 0;
}