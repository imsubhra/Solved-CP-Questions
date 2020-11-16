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
        ll d=n;
        ll count=0;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        if(count==3)
        {
            cout<<d-222<<"\n";
        }
        else if(count==4)
        {
            cout<<d-2222<<"\n";
        }
        else if(count==5)
        {
            cout<<d-22222<<"\n";
        }
        else if(count==6)
        {
            cout<<d-222222<<"\n";
        }
        else if(count==7)
        {
            cout<<d-2222222<<"\n";
        }else if(count==8)
        {
            cout<<d-22222222<<"\n";
        }else if(count==9)
        {
            cout<<d-222222222<<"\n";
        }else if(count==10)
        {
            cout<<d-2222222222<<"\n";
        }
    }
}
