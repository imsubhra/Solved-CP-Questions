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
        if(n==1)
        {
            cout<<"0"<<"\n";
        }
        else if(n%2!=0)
        {
            cout<<(n-1)/2<<"\n";
        }
        else if(n%2==0)
        {
            if((n/2)%2==0)
            {
                ll sum=n/2;
                while(sum%2==0)
                {
                    sum=sum/2;
                }
                cout<<(sum-1)/2<<"\n";
            }
            else
            {
                cout<<((n/2)-1)/2<<"\n";
            }
        }
    }
}