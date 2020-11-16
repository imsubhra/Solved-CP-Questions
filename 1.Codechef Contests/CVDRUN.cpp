#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        ll flag=1;
        ll sum=(x+k)%n;
        vector <ll> a(n);
        a.push_back(x);
        while(sum!=x)
        {
            a.push_back(sum);
            sum=(sum+k)%n;
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==y)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
