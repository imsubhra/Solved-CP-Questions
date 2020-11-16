/*
Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array.
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only
element hence its the only equilibrium
point.
Example 2:

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case
equilibrium point is at position 3
as elements before it (1+3) =
elements after it (2+2).
*/

#include <iostream>
using namespace std;


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {

    int sum=0;
    int left=0;
    for(int i=0;i<n;i++)
    {
    sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        if(left==sum)
        return i+1;
        else
        left+=a[i];
    }
    return -1;
}

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

