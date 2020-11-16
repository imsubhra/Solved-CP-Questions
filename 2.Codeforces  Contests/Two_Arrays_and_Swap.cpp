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
        ll a[n],b[n],sum1=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        
        for(ll i=0;i<k;i++)
        {
            if(b[i]>a[i])
            {
            swap(a[i],b[i]);
            }
        }
        for(ll i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        
    
        cout<<sum1<<"\n";
    }