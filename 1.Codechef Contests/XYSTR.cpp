#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll count=0;
        ll i=0,j=1;
        while(i<s.length() && j<s.length())
        {
            if((s[i]=='x' && s[j]=='y') || (s[i]=='y' && s[j]=='x'))
            {
                count++;
                i+=2;
                j+=2;
            }
            else
            {
                i++;
                j++;
            }
            
        }
        cout<<count<<"\n";
    }
}