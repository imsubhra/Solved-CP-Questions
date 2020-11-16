#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll mn = min(a[0].size(),a[n - 1].size());
	    string first = a[0], last = a[n - 1];
        ll i = 0;
        string pre;
        while (i < mn && first[i] == last[i])
        {
        i++;
        pre = first.substr(0, i);
        }
        if(pre.length()>=1)
        {
        cout<<pre<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }

	}
	return 0;
}
