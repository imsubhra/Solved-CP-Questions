#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        unordered_map<char,int> myMap;
        for(long long int i=0;i<n;i++)
        {
            if(myMap.find(str[i])==myMap.end())
                myMap[str[i]]=1;
            else
                myMap[str[i]]++;
        }
        while(q--)
        {
            long long int c;
            cin>>c;
            long long int count = 0;
            for(auto x:myMap)
            {
                if(x.second>c)
                    count+=abs(c-x.second);
            }
            cout<<count<<'\n';
        }
    }
	// your code goes here
	return 0;
}