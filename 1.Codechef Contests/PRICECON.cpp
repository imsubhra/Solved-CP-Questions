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
        ll a[n],sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll sum1=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>k)
            {
                a[i]=k;
            }
            sum1+=a[i];
        }
        cout<<sum-sum1<<"\n";
        
    }
}