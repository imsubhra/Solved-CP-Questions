/*
Given an array of 0s and 1s. Find the length of the largest subarray with equal number of 0s and 1s.

Example 1:

Input:
N = 4
A[] = {0,1,0,1}
Output: 4
Explanation: The array from index [0...3]
contains equal number of 0's and 1's.
Thus maximum length of subarray having
equal number of 0's and 1's is 4.
Example 2:

Input:
N = 5
A[] = {0,0,1,0,0}
Output: 2
*/

#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

// return the maximum length of the subarray
// with equal 0s and 1s
int maxLen(int a[], int n)
{
    int ans=0;
    int sum=0;
    int count=0;
    unordered_map <int, int> umap;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=-1;
        }

    }
    umap[0] = -1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(umap.find(sum) != umap.end()){
ans = max(ans, i - umap[sum]);
}
else
umap[sum] = i;

}
return ans;
}

int main()
{

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << maxLen(a, n) << endl;

}

