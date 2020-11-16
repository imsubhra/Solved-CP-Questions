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
        if(n>=3)
        {
        if(n%4==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
