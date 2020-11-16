/*
Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.



Example 1:

Input:
5 3
3 5 4 2 9

Output:
4

Explanation:
Third smallest element in the array is 4.
Example 2:

Input:
5 5
4 3 7 6 5

Output:
7

Explanation:
Fifth smallest element in the array is 7.
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cin>>k;
        for(int i=0;i<n;i++)
        {
        cout<<a[k-1];
        break;
        }
        cout<<"\n";
    }
	return 0;
}
