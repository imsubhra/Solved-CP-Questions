/*
Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

Example 1:

Input:
str = 123
Output: 123

Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.
*/
#include <bits/stdc++.h>
using namespace std;

/*You are required to complete this method */
int atoi(string str)
{
for(int i=0;i<str.length();i++)
{
    if(str[i]<='9' && str[i]>='0' || str[i]=='-')
     continue;
     else
     return -1;
}
int t=stoi(str);
return t;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}


