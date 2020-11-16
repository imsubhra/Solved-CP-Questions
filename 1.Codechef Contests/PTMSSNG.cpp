#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
	{
int t;
cin>>t;
while(t--)
{
ll y;
cin>>y;
ll x1=-1,y1=-1;
ll n=4*y-1;
ll a[n],b[n];
cin>>a[0]>>b[0];
x1=a[0],y1=b[0];
for(ll i=1;i<n;i++)
{
cin>>a[i]>>b[i];
x1=x1^a[i];
y1=y1^b[i];
}


cout<<x1<<" "<<y1<<"\n";

}
}

