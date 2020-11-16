#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    queue<ll> magnet,iron;
            ll d=k+1;
	    ll left=0,right=0;
            ll count=0;
	    for(ll i=0; i<n; i++)
	    {
                if(s[i]=='I')
	        {
	        iron.push(i);
	        }
	        if(s[i]=='M')
	        {
	        magnet.push(i);
	        }

	        if(s[i]=='X' || i==n-1)
                {
	            while(!iron.empty() && !magnet.empty())
	            {
	                ll sheet=0;
	                right=max(magnet.front(),iron.front());
	                left= min(magnet.front(),iron.front());
	                for(ll i=left; i<=right; i++)
	                {
	                    if(s[i]==':')
	                    sheet++;
	                }
	                if((d-abs(left-right)-sheet)>0)
	                {
	                    count++;
	                    iron.pop();
                        magnet.pop();
	                }

	                else if(iron.front() > magnet.front())
	                {
	                    magnet.pop();
	                }

	                else
	                {
	                 iron.pop();
	                }
	            }


	            while(!iron.empty())
	            {
	            iron.pop();
	            }
	            while(!magnet.empty())
	            {
	            magnet.pop();
	            }
	        }
	    }
	        cout <<count<<"\n";
	}
	return 0;
}
