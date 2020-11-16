#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,h;
        cin>>p>>h;
        while(p>0 && h>0)
        {
            p=p-h;
            h=h/2;
        }
        if(p<=0)
        {
        cout<<"1"<<"\n";
        }
        else if(h<=0)
        {
        cout<<"0"<<"\n";
        }

    }
}
