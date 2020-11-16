#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
ll t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;
    if(a==0 || b==0)
    {
        cout<<"0"<<"\n";
    }
    else
    {
        ll sum=0;
        sum=a+b;
        ll k=sum/3;
        if(k<=a && k<=b)
        {
            cout<<k<<"\n";
        }
        else
        {
            if(k>a)
            cout<<a<<"\n";
            else if(k>b)
            cout<<b<<"\n";
        }
    }
}
}
