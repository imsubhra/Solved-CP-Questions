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
        ll n=s.length();
        ll i=0;
        while(i<n-1)
        {
            cout<<s[i];
            i+=2;

        }
        cout<<s[n-1];
        cout<<"\n";
    }
}
