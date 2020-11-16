/*
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr
*/

#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    reverse(s.begin(),s.end());
    vector<int> v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            v.push_back(i);
        }
    }
    v.push_back(s.length());
    int d=0;
    for(int i=0;i<v.size();i++)
    {

        reverse(s.begin() + d, s.begin() + (v[i]));
        d=v[i]+1;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}


