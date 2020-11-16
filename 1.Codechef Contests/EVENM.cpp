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
        ll a[n][n];
      int row1=0,col1=0,row2=n-1,col2=n-1,iter=1;
    while(iter<=(n*n))
    {
        for(int i=col1;i<=col2;i++)
        {a[row1][i]=iter++;}
        for(int j=row1+1;j<=row2;j++)
          {a[j][col2]=iter++;}
        for(int i=col2-1;i>=col1;i--)
        {
            a[row2][i]=iter++;
        }
        for(int j=row2-1;j>=row1+1;j--)
        {
            a[j][col1]=iter++;
        }
        row1++;row2--;col1++;col2--;
    }
   for(int i=0; i<n; i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<a[i][j]<<" ";
      }
        cout<<"\n";
         }

        cout<<"\n";
    }
}