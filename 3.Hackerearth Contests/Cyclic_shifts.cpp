#include<bits/stdc++.h>
using namespace std;
#define INT_BITS 16
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		    long long unsigned int n,d,sum=0;
			char s;
			cin>>n>>d>>s;
			if(s=='R')
			{
            sum=(n >> d)|(n << (INT_BITS - d));
            bitset<16> k{sum};
            cout<<k.to_ullong()<<"\n";
			}
			else if(s=='L')
			{
			sum=(n << d)|(n >> (INT_BITS - d));
            bitset<16> k{sum};
            cout<<k.to_ullong()<<"\n";
			}
	}
}