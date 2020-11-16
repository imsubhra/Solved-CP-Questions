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
        ll flag=1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<"\n";
        }
        else if(flag==1)
        {
            cout<<"YES"<<"\n";
        }
    }
}
