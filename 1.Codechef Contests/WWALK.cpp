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
        ll a[n],b[n];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        ll sum=0,sum1=0,sum2=0;
        for(ll i=1;i<=n;i++)
        {
            
            if(a[i]==b[i] && sum1==sum2)
            {
                sum+=a[i];
            }
            sum1+=a[i];
            sum2+=b[i];
        }
        
        
        cout<<sum<<"\n";
    }
}