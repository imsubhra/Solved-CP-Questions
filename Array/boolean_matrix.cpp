/*
Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Example 1:

Input:
R = 2, C = 2
matrix[][] = {{1, 0},
              {0, 0}}
Output:
1 1
1 0
Explanation:
Only cell that has 1 is at (0,0) so all
cells in row 0 are modified to 1 and all
cells in column 0 are modified to 1.

Example 2:

Input:
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output:
1 1 1
1 1 1
1 1 1
1 0 0
Explanation:
The position of cells that have 1 in
the original matrix are (0,0), (1,0)
and (2,0). Therefore, all cells in row
0,1,2 are and column 0 are modified to 1.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    ll a[n][m];
	    ll r[n]={0},c[m]={0};
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	            if(a[i][j]==1)
	            {
	                r[i]=1;
	                c[j]=1;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(r[i]==1 || c[j]==1 )
	            {
	                a[i][j]=1;
	                cout<<a[i][j]<<" ";
	            }
	            else
	                 {
	                a[i][j]=0;
	                cout<<a[i][j]<<" ";
	            }
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}
