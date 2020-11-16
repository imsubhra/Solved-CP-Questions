#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int main()	{

	ll t;
	cin >> t;
	while(t--)	{
	ll n;
	cin >> n;
	ll a[n][n];
	ll count = 0;

	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			cin >> a[i][j];
		}

	}

      for (ll i = n-1; i > 0; i--)
        {
            if(a[0][i]!=(i+1))
            {
                for (ll j = 0; j <=i; j++)
                {
                    for (ll k = j; k<=i;k++)
                    {
                        int temp=a[j][k];
                        a[j][k]=a[k][j];
                        a[k][j]=temp;
                    }
                }
                count++;
            }
        }
	cout<<count<<"\n";

	}
	return 0;
}
