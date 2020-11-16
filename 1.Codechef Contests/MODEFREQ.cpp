#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comp(const pair<int,int> a,const pair<int,int> b){
    if(a.second == b.second)
    return a.first < b.first;
    return a.second > b.second;
}
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
        map <int,int> mp;
        for(ll i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
               map <int,int> m;

        for(auto x:mp)
        {
            m[x.second]++;
        }
        ll max=0;
        ll z=0;
        for(auto x:m)
        {
            if(x.second>max)
            {
                max=x.second;
                z=x.first;
            }
        }
        cout<<z<<"\n";
    }
}
