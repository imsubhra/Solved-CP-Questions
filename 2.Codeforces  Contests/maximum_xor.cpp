#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   string s,r;
   cin>>s>>r;
   string q,u,v;
   string f,g;

   for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == r[i])
            q += "0";
        else
            q += "1";
    }
   sort(s.begin(),s.end());
   sort(r.begin(),r.end());
   f=s;
   g=r;
   reverse(s.begin(),s.end());
   reverse(r.begin(),r.end());
   for (int i = 0; i < s.length(); i++)
    {
        if (f[i] == r[i])
            u += "0";
        else
            u += "1";
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (g[i] == s[i])
            v += "0";
        else
            v+= "1";
    }
    string z=max(q,max(u,v));
    sort(z.begin(),z.end());
    reverse(z.begin(),z.end());
    cout<<z;
}
