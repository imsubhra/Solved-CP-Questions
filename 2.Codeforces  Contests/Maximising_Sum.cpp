#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    ll pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    ll res=pre[n-1];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    if(pre[i]<0)
    {
        ans = -1*(2*pre[i]);
        ans+=pre[n-1];
        if(ans>res)
        {
            res = ans;
        }
    }
    }
    cout<<res;
}
