/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

Example 1:

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same
characters with same frequency. So,
both are anagrams.
Example 2:

Input:
a = allergy, b = allergic
Output: NO
Explanation:Characters in both the strings
are not same, so they are not anagrams
*/

#include <bits/stdc++.h>
using namespace std;


/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    if(c.length() != d.length())
    return false;

    map <char,int> mp;
    map <char,int> pm;
    for(int i=0;c[i]&&d[i];i++)
    {
        mp[c[i]]++;
        pm[d[i]]++;
    }

    for (int i = 0; i < 256; i++)
        if (mp[i] != pm[i])
            return false;

    return true;

}

int main() {

    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
