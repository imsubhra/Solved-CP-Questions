#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[5];
        for(ll i=0;i<5;i++)
        {
            cin>>a[i];
        }
        ll p;
        cin>>p;
        for(ll i=0;i<5;i++)
        {
            a[i]=p*a[i];
        }
        ll sum=0;
        for(ll i=0;i<5;i++)
        {
            sum+=a[i];
        }
        if(sum>120)
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
    }
}