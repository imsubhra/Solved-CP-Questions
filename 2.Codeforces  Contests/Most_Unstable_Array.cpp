#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n==1)
        cout<<"0"<<"\n";
        else if(n==2)
        {
            cout<<k<<"\n";
        }
        else
        {
            cout<<k*2<<"\n";
        }
    }
}
