#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
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
        }
        ll count=1;
        ll flag=1;
        for(ll i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<k)
            {
             flag=0;
             break;
            }
            else
            {
                count++;
                sum-=k;
            }
        }
        if(flag==1)
        {
        cout<<(sum/k)+count<<"\n";
        }
        else
        {
            cout<<count<<"\n";
        }
    }
}
