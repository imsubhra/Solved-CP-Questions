#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll sum=0;
        sum=n/x;
        ll d=0;
        d=sum*x+y;
        if(d>n)
        {
            d=d-x;
            cout<<d<<"\n";
        }
        else
        {
            cout<<d<<"\n";
        }
    }
}
