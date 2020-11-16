#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isprime(ll n)
{
    if(n<=1)
    return false;
    if(n==2)
    return true;
    for(ll i=2;i<=sqrt(n);i++)
    if(n%i==0)
    return false;
    return true;
}
int main()
{
        ll n,m;
       cin>>n>>m;
       ll a=n*m;
       ll b=(n*m)/4;
       vector <ll> v;
       for(ll i=n;i<=m;i++)
       {
           if(isprime(i))
           {
               v.push_back(i);
           }
       }
       for(ll i=0;i<v.size();i++)
       {
           for(ll j=i+1;j<v.size();j++)
           {
               if(i!=j)
               {
                   if(b<=(v[i]*v[j]) && (v[i]*v[j])<=a)
                   {
                       cout<<v[i]<<","<<v[j]<<"\n";
                   }
               }
           }
       }
}
