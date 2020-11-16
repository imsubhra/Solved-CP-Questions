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
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum1=0,sum2=0;
        sort(a,a+n,greater<int>());
        for(ll i=0;i<n;i++)
        {
            if(sum1>sum2)
            {
                sum2+=a[i];
            }
            else
            {
                sum1+=a[i];
            }
        }
        cout<<max(sum1,sum2)<<"\n";
    }
}
