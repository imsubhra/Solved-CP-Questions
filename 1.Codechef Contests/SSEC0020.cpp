#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll n;
        cin>>n;
        string s=to_string(n);
        string r="";
        int flag=1;
        for(int i=0;i<s.length();i++)
        {
            r+=s[i];
            int temp=stoi(r);
            if(temp%(s.length()-i)==0)
            {
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"No"<<"\n";
        }
        else
        {
            cout<<"Yes"<<"\n";
        }

}
