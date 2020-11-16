/*
Given a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same.

Example 1:

Input: S = "geeksforGeeks"
Output: geksfor
Explanation: Only keep the first
occurrence
Example 2:

Input: S = "gfg"
Output: gf
Explanation: Only keep the first
occurrence
*/

#include <bits/stdc++.h>
using namespace std
int main() {
ll t;
cin>>t;
  cin.ignore();
while(t--)
{
    string s;
    getline(cin,s);

    string r;
    map <char,int> m;
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]==0)
        {
        m[s[i]]++;
        r+=s[i];
        }

    }
    cout<<r<<"\n";
}
	return 0;
}
