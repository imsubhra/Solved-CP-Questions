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
        char a[8][8];
        for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
        a[i][j]='X';
        }
    }
    int x=0;
        for(int i=0;i<8;i++)
   {
       for(int j=0;j<8;j++)
       {
           if(x==n)
           {
               break;
           }
           a[i][j]='.';
           x++;
        }
         if(x==n)
           {
               break;
           }
   }
   a[0][0]='O';
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        cout<<a[i][j];
        cout<<"\n";
    }
}
}
