#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s>>r;
        int mp[26]={0};
        int pm[26]={0};
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]-97]++;
        }
        for(int i=0;i<r.length();i++)
        {
            pm[r[i]-97]++;
        }
        ll flag=1;
        for(int i=0;i<s.length();i++)
        {
            if(pm[s[i]-97]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"1"<<"\n";
        }
        else
        {
            cout<<"0"<<"\n";
        }

    }
}
