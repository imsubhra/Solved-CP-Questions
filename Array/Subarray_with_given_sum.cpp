/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.
*/

#include <bits/stdc++.h>
using namespace std;
int sub(int a[],int n,int sum)
{
    int curr=a[0],start=0,i;
	    for(int i=1;i<=n;i++)
	    {
	        while(curr>sum && start<i-1)
	        {
	            curr=curr-a[start];
	            start++;
	        }
	        if(sum==curr) {
	            cout<<start+1<<" "<<i;
	            return 1;
	       }

	        if(i<n)
	        curr=curr+a[i];
	    }
	    cout<<"-1";
	    return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sub(a,n,sum);
	    cout<<"\n";

	}
	return 0;
}
