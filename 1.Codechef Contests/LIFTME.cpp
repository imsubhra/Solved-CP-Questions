#include <bits/stdc++.h>
using namespace std;

int main() {
long long int t;
cin>>t;
while(t--)
{
    long long int n,q,sum=0,dest=0;
    cin>>n>>q;
    long long int a[q],b[q];
    for(int i=0;i<q;i++)
    {
        cin>>a[i]>>b[i];
        if(sum==0)
        {
        if(a[0]>=b[0])
        {
            sum+=a[0]+(a[0]-b[0]);
            dest=b[0];
        }
        else
        {
            sum+=b[0];
            dest=b[0];
        }
        }
        else if(sum>0)
        {
        sum+=abs(dest-a[i])+abs(b[i]-a[i]);
        dest=b[i];
        }
    }
 cout<<sum<<endl;
   
}
return 0;
}
