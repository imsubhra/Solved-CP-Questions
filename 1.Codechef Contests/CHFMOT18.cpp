#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll s,n;
        cin>>s>>n;
        if(s%n==0)
        {
            cout<<s/n<<"\n";
        }
        else
        {
          ll sum=0;
          sum=s/n;
          ll a=0;
          a=sum*n;
          s=s-a;

          if(s%2==0)
          {
          cout<<sum+1<<"\n";
          }
          else if(s==1)
          {
              cout<<sum+1<<"\n";
          }
          else if(s&2!=0 && s>=3)
          cout<<sum+2<<"\n";
        }
    }
}
