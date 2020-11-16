#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,x,p,k;
        cin>>n>>x>>p>>k;

        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll less=0,great=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]<x)
            {
                less++;
            }
            else if(a[i]>x){
               great++;
            }
        }
        ll req=0;
        if(less>(p-1))
        {
            if(k<=less && (less-k+1)>=(less-(p-1))){
                req=less-(p-1);
            }
            else
            {
                req=-1;
            }
        }
        else if(great>(n-p))
        {
            if(k>(n-great) && (k-(n-great))>=(great-(n-p)))
            {
                req=(great-(n-p));
            }
            else
            {
                req=-1;
            }
        }
        cout<<req<<"\n";
    }
}
