/*
Given a string S, find length of the longest substring with all distinct characters.  For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.
Example:
Input:
2
abababcdefababcdab
geeksforgeeks

Output:
6
7
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int mx=INT_MIN;
    for(int i=0;i<s.length();i++)
    {
     map<char,int> mp;
     int count=0;
     for(int j=i;j<s.length();j++)
     {
         if(mp[s[j]]==0)
         {
             mp[s[j]]++;
             count++;
         }
         else if(mp[s[j]]>0)
         {
             break;
         }

     }
     mx=max(count,mx);
     mp.clear();
    }
    cout<<mx<<"\n";
}
	return 0;
}
