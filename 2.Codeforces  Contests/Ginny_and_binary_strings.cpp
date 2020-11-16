#include <bits/stdc++.h> 
using namespace std; 
  
 
int highestPower(string str, int len) 
{ 
  
    
    int ans = 0; 
  
 
    for (int i = len - 1; i >= 0; i--) { 
        if (str[i] == '0') 
            ans++; 
        else
            break; 
    } 
  
    return ans; 
} 
  
 
int main() 
{ 
    string str;
    cin>>str;
        int len = str.length(); 
 
    cout << highestPower(str, len); 
  
    return 0; 
} 