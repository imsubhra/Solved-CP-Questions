#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define MOD 1000000007

    ll power (ll a, ll b) {
    ll ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
    }
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                sum+=power(2,i);
            }
        }
        cout<<sum%MOD<<"\n";
    }
}
