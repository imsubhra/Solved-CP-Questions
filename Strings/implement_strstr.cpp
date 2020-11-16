/*
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.
Example 2:

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).
*/

#include<bits/stdc++.h>
using namespace std;


/* The function should return position where the target string
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     for(int i=0;i<s.length();i++)
     for(int j=s.length()-1;j>=0;j--)
         if(s.substr(i,j+1)==x)

             return i;
             return -1;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;

        cin>>a;
        cin>>b;

        cout<<strstr(a,b)<<endl;
    }
}
