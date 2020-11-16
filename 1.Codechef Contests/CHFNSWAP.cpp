#include<bits/stdc++.h>
using namespace std;
typedef long long int ull;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        sum=(n*(n+1))/2;
        if(sum%2!=0)
        {
            cout<<"0"<<"\n";
        }
        else
        {
            ll count=0;
            if(n<6)
            {
                if(n==3 || n==4)
                {
                count=2;
                }
                else
                {
                    count=0;
                }
            }
            else
            {
            ll k=(-1+sqrt(1+4*sum))/2;
             if((k*(k+1))/2==sum/2)
             count=n-k+(k*(k-1))/2+(((n-k)*(n-k-1))/2);
             else
             count=n-k;
            }
		cout << count <<"\n";
	}
    }
}
