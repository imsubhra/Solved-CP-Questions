#include<bits/stdc++.h>	
using namespace std;	
typedef long long ll;	

void solve(int arr[],int n){	
    

        int c5=0,c10=0;	

        
        for(int i=0; i<n; i++){	
            if(arr[i]==5) 
            c5++;	
            if(arr[i]==10){	
                if(c5>0)
                { c5--; c10++; 
                continue; 
                    
                }	
                else
                { 
                    cout<<"NO"<<endl; 
                    return;  
                    
                } 	
            }	
            if(arr[i]==15)
            {	
                if(c10>0)
                { 
                c10--; 
                continue; 
                    
                }	
                if(c5>=2)
                { 
                    c5--; 
                    c5--; 
                     
                    continue; 
                    
                }	
                else{ 
                    cout<<"NO"<<endl; 
                return;  
                    
                }	
            }	
        }	
        cout<<"YES"<<endl;	
}	

int main(){	
    int t;	
    cin>>t;	

    while(t--){	
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solve(a,n);	
    }	
}