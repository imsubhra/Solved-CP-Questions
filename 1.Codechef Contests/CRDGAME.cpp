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
        ll b[n];
        ll count=0,count1=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            ll sum = 0,sum1=0;
    while (a[i] != 0)
    {
     sum = sum + a[i] % 10;
     a[i] = a[i]/10;
    }

    while (b[i] != 0)
    {
     sum1 = sum1 + b[i] % 10;
     b[i] = b[i]/10;
    }
    if(sum==sum1)
    {
        count++;
        count1++;
    }
    else if(sum>sum1)
    {
        count++;
    }
    else
    {
    count1++;
    }
    }
        if(count>count1)
        {
            cout<<"0"<<" "<<count<<"\n";
        }
        else if(count==count1)
        {
            cout<<"2"<<" "<<count<<"\n";
        }
       else
       {
           cout<<"1"<<" "<<count1<<"\n";
       }
    }
}
