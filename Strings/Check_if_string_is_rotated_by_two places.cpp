/*
Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 1
Explanation: amazon can be rotated anti
clockwise by two places, which will make
it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 0
Explanation: If we rotate geeksforgeeks by
two place in any direction , we won't get
geeksgeeksfor.
*/


#include <bits/stdc++.h>
using namespace std;
/*  Function to check if str1 can be formed from
*   str2 after rotation by 2 places
*/
bool isRotated(string str1, string str2)

{
   if (str1.length() != str2.length())
        return false;
  if(str1.length()==1)
  {
      if(str1==str2)
      {
          return true;
      }
      else
      {
          return false;
      }
  }
    string clock_rot ="";
    string anticlock_rot ="";
    int len = str2.length();

    anticlock_rot += (str2.substr(len-2,2) + str2.substr(0,len-2));

    clock_rot +=  (str2.substr(2,len-1) + str2.substr(0,2));

    if(str1==anticlock_rot || str1==clock_rot)
    return true;
    else
    return false;
}

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		cout<<isRotated(s,b)<<endl;
	}
	return 0;
}
