/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:

Input:
N = 3
A[] = {1,2,3}
Output: -1

Explanation: Since, each element in
{1,2,3} appears only once so there
is no majority element.
Example 2:

Input:
N = 5
A[] = {3,1,3,3,2}
Output: 3
Explanation: Since, 3 is present
more than N/2 times, so it is
the majority element.
*/

#include<bits/stdc++.h>
using namespace std;

/* Function to find the candidate for Majority */
int findCandidate(int a[], int size)
{
    int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++)
    {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}

/* Function to check if the candidate
   occurs more than n/2 times */
bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)

    if (a[i] == cand)
    count++;

    if (count > size/2)
    return 1;

    else
    return 0;
}

/* Function to print Majority Element */
void printMajority(int a[], int size)
{
   /* Find the candidate for Majority*/
   int cand = findCandidate(a, size);

   /* Print the candidate if it is Majority*/
   if (isMajority(a, size, cand))
   cout <<cand<<endl;

   else
   cout << "-1"<<endl;
}

int main()
{
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
    printMajority(a,n);
    }
    return 0;
}
