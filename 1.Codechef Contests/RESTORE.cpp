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
        ll a[n+1];
        ll req[n+1]={0};
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll no=4000000;
        for(ll i=1;i<=n;i++)
        {
            if(a[i]>i)
            {
                if(req[a[i]]!=0)
                {
                    req[i]=req[a[i]];
                }
                else
                {
                    req[i]=no;
                    req[a[i]]=no;
                    no--;
                }
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if(req[i]==0)
            {
                req[i]=no;
                no--;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            cout<<req[i]<<" ";
        }
        cout<<"\n";
    }
}
