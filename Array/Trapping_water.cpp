/*
Given an array arr[] of N non-negative integers representing the height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
The structure is like below:
|  |
|_|
We can trap 2 units of water in the middle gap.



Example 1:

Input:
N = 4
arr[] = {7,4,0,9}
Output: 10
Explanation: Water trapped by the
block of height 4 is 3 units, block
of height 0 is 7 units. So, the
total unit of water trapped is
10 units.
Example 2:

Input:
N = 3
arr[] = {6,9,9}
Output: 0
Explanation: No water will be trapped.
*/
#include<bits/stdc++.h>
using namespace std;
// function to find the trapped water in between buildings

int trappingWater(int arr[], int n){

int sum=0;
int low=0,high=n-1;
int leftmax=0,rightmax=0;
while(low<=high)
{
    if(arr[low]<arr[high])
    {
        if(arr[low]>leftmax)
        {
            leftmax=arr[low];
        }
        else
        {
            sum+=leftmax-arr[low];
        }
        low++;
    }
    else
    {
        if(arr[high]>rightmax)
        {
            rightmax=arr[high];
        }
        else
        {
            sum+=rightmax-arr[high];
        }
        high--;
    }
}
return sum;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;

        cin >> n;

        int a[n];

        for(int i =0;i<n;i++){
            cin >> a[i];
        }

        cout << trappingWater(a, n) << endl;

    }

    return 0;
}
