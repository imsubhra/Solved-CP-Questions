#include <bits/stdc++.h> 
using namespace std; 
  
int minXor(int a[], int n) 
{ 
    sort(a, a + n); 
  
    int minXor = INT_MAX; 
    int val = 0; 
  
   for (int i = 0; i < n-1; i++) { 
        val = (a[i] & a[i+1]) ^ (a[i] | a[i + 1]); 
        minXor = min(minXor, val); 
    } 
  
    return minXor; 
} 
  
int main() 
{ 
    int a[100000],t,n;
   cin>>t;
   for(int i=0;i<t;i++)
   {
	   cin>>n;
	   for(int j=0;j<n;j++)
	   {
		   cin>>a[j];
	   }
   cout<<minXor(a,n)<< endl;
   }
   
   return 0;
   } 