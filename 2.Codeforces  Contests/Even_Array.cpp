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
        ll b[n],count1=0,count2=0;
        if(n>1)
        {
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]%2==1)
                {
                    count1++;
                }
            }
            else if(i%2==1)
            {
                if(a[i]%2==0)
                {
                    count2++;
                }
            }
        }
        ll count=count1-count2;
        if(count==0)
        {
            cout<<count1<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        }
        else if(n==1)
        {
        if(a[0]%2!=0%2)
        cout<<"-1"<<"\n";
        else
        cout<<"0"<<"\n";
        }

    }
}
