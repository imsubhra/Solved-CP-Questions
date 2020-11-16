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
       string s;
       cin>>s;
       ll c1=0;
       ll c2=0;
       ll c3=0;
       ll min=0;
       ll sum=0;
       for(ll i=0;i<n;i++)
       {
           min=abs(c2-c1);
           if(c2>c1  && min>sum)
           {
               c3++;
               sum=min;
           }
           if(s[i]=='(')
           {
               c1++;
           }
           else if(s[i]==')')
           {
               c2++;
           }
       }
       cout<<c3<<"\n";
    }
}
