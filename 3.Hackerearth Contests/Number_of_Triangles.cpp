#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
		cin>>a>>b>>c;
        ll num=a;
        ll var=1;
		ll sum=abs(b-c);
        ll ans=0;
        if( sum < 2 || sum == a - 1){
           num -= 3;
    }
    else if(sum == 2 || sum == a - 2){
           num -= 4;
    }
    else{
      num -= 4;
      var += 1;
    }
    ans = num * (a - 5) + var;
    cout<<ans<<"\n";
}

}
