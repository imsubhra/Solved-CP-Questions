#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int p[1001][1001] = {0};

ll cal(int start,int end,ll a[],int k){
    if(start==end){
        return k;
    }
    int mp[101] = {0};
    ll ans = k;
    for(int i=start;i<=end;i++){
       mp[a[i]]++;
    }
    for(int i=0;i<=100;i++){
        if(mp[i]>1){
            ans+=mp[i];
        }
    }
    return ans;
}

ll fun(int start,int end,ll a[],int k){
    if(start>end){
        return 0;
    }
    if(start==end){
        return k;
    }
    if(p[start][end]!=0){
        return p[start][end];
    }
    ll ans = INT_MAX;

    for(int i=start;i<=end;i++){
        ans = min(ans,cal(start,i,a,k) + fun(i+1,end,a,k));
    }

    p[start][end] = ans;
    return p[start][end];
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       ll a[n];
       ll ans = k;

       memset(p,0,sizeof(p));

       for(int i=0;i<n;i++){
           cin>>a[i];
       }

       cout<<fun(0,n-1,a,k)<<endl;

    }
  return 0;
}
