/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output: 9
Explanation: Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which
is a contiguous subarray.
Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output: -1
Explanation: Max subarray sum is -1
of element (-1)
*/
#include <bits/stdc++.h>
using namespace std;

int maxsum(int a[],int n)
{
    int max_so_far=a[0];
    int max_end=a[0];
    for(int i=1;i<n;i++)
    {
        max_end=max(a[i],max_end+a[i]);
        max_so_far=max(max_so_far,max_end);

    }
    return max_so_far;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<maxsum(a,n)<<"\n";
	}
	return 0;
}
