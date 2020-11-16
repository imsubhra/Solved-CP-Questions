#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool ispow(ll n){
    if(n == 0)
    {
    return false;
    }
    else
    {
    return (ceil(log2(n)) == floor(log2(n)));
    }
}

int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin >> n;
    if(n == 1)
    {
        cout << "1"<<"\n";
    }
    else if(ispow(n))
    {
    cout << "-1"<<"\n";
    }
    else
    {
        ll dp[n+1];
        dp[1] = 2;
        dp[2] = 3;
        dp[3] = 1;
        for(ll i = 4; i <= n; i++)
        {
            dp[i]=i;
        }
        for(ll i = 4; i <= n; i++)
        {
            if(ispow(i))
            {
                swap(dp[i], dp[i + 1]);
                i++;
            }
        }
        for(ll i = 1; i <= n; i++){
            cout<<dp[i]<<" ";
        }
        cout<<"\n";
    }
}
	return 0;
}
