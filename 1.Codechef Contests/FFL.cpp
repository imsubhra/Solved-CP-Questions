#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    long long int p[a],q[a],flag=1;
	    for(int i=0;i<a;i++)
	    {
	       cin>>p[i];
	    }
	    for(int i=0;i<a;i++)
	    {
	        cin>>q[i];
	    }
	    for(int i=0;i<a;i++) {
	       
	           for(int j=1;j<a;j++)
	           {
	               if(q[i]+q[j]==1 && p[i]+p[j]+b<=100)
	               {
	                flag=0;
	                break;
	               }
	               
	           }
	       }
	       
	    if(flag==0)
	    cout<<"yes"<<"\n";
	    else
	    cout<<"no"<<"\n";
	}
	return 0;
}
