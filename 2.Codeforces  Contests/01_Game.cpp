#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       string ch;
       cin>>ch;
       ll c0=0;
       ll c1=0;
       ll n=ch.length();
       for(ll i=0;i<n;i++)
       {
           if(ch[i]=='0')
           {
               c0++;
           }
           else if(ch[i]=='1')
           {
               c1++;
           }
       }

       if(c0==0 || c1==0)
       {
           cout<<"NET"<<"\n";
       }
       else if(c0==c1)
       {
           if(c0%2==1 && c0%2==1)
           {
           cout<<"DA\n";
           }
           else
               cout<<"NET\n";
       }
       else
       {
           ll mini=min(c0,c1);
           if(mini%2==0)
           {
               cout<<"NET\n";
           }
           else
           {
               cout<<"DA\n";
           }
       }

    }
}
