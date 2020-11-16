#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string ans="YES";
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>arr[i];    
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	     if(arr[i]==1)
	     {
	        if(arr[i+1]==1||arr[i+2]==1||arr[i+3]==1||arr[i+4]==1||arr[i+5]==1)
	        {
	        ans="NO";
	        break;
	        }
	        
	     }   
	    }
	    cout<<ans<<endl;
	}
	return 0;
}