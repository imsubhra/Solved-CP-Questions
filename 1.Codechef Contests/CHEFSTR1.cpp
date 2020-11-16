#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(ll i=0;i<n-1;i++)
        {
            b[i]=abs(a[i]-a[i+1])-1;
            sum+=b[i];
        }
        cout<<sum<<"\n";
    }
}
