/*
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Example 1:

Input:
N = 7
A[] = {100,180,260,310,40,535,695}
Output: (0 3) (4 6)
Explanation: We can buy stock on day
0, and sell it on 3rd day, which will
give us maximum profit. Now, we buy
stock on day 4 and sell it on day 6.
Example 2:

Input:
N = 5
A[] = {4,2,2,2,4}
Output: (3 4)
Explanation: We can buy stock on day
3, and sell it on 4th day, which will
give us maximum profit.

*/

#include<bits/stdc++.h>
using namespace std;


void stockBuySell(int price[], int n)
{
    if (n == 1)
        return;


    int i = 0,buy=0,sell=0;
    while (i < n - 1) {

            while ((i < n - 1) && (price[i + 1] <= price[i]))
            i++;


        if (i == n - 1)
            break;

        buy = i++;


        while ((i < n) && (price[i] >= price[i - 1]))
            i++;

        sell = i - 1;

        cout <<"("<< buy
             <<" "<< sell <<")"<<" ";

    }
  if(buy==0 && sell==0)
  cout<<"No Profit"<<endl;
  else
  cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    stockBuySell(price, n);
    }
    return 0;
}
