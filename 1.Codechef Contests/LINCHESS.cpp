#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a;
        ll ans=-1;
        ll m=INT_MAX;
        while(n--)
        {
            cin>>a;
            if(k%a==0)
            {
                if((k/a)<m)
                {
                    m=a;
                    ans=a;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
