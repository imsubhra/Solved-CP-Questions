#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll count=0;
        while(a<=n && b<=n)
        {
            if(a<=b)
            {
                a=a+b;
                count++;
            }
            else if(a>b)
            {
                b=a+b;
                count++;
            }
        }
        cout<<count<<"\n";
    }
}
