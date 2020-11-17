#include<bits/stdc++.h>
using namespace std;


int main(){
int n;cin>>n;
int a[n],b[n];

for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++)
    cin>>b[i];

sort(a,a+n);
sort(b,b+n);
bool f=1;
for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        f=0;
        break;
    }
}
if(f)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;
}
