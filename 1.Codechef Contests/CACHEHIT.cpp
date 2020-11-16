#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
{
 ll n,b,m;
 cin>>n>>b>>m;
 ll a[m];
 for(int i=0;i<m;i++)
 {
     cin>>a[i];
 }
    ll prev = a[0]/b;
    ll c=1;
    for(ll i=1;i<m;i++)
    {

        if(prev!=a[i]/b)
        {
            c++;
            prev=a[i]/b;
        }
        else
        {
        prev=a[i]/b;
        }
    }
    cout<<c<<"\n";
}
}
