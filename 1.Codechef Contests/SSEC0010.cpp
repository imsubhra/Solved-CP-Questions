#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%7==1 || n%7==0)
        {
            cout<<"83"<<"\n";
        }
        else if(n%7==2 || n%7==6)
                {
            cout<<"83 83"<<"\n";
        }
        else if(n%7==3 || n%7==5)
                {
            cout<<"83 83 69"<<"\n";
        }
        else if(n%7==4)
                {
            cout<<"83 83 69 67"<<"\n";
        }
    }
}
