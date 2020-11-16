#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--)
	{
    string s;
    cin >> s;
    ll flag = 0;
    for(ll i=0;i < s.length() ;i++){
        if(s[i] != s[s.length()-i-1]){
            flag = 1;
            break;
   }
}

    if (flag==0) {
        cout <<"-1"<<"\n";
    }
    else {
        sort(s.begin(),s.end());
		cout<<s<<"\n";
    }
	}
    return 0;
}

