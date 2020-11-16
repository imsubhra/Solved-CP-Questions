#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int x , y, p , q;
    cin >> x >> y >> p >> q;
    long long int b1 = p*y;
    long long int b2 = q*x;
    long long int b3 = (b1*x)/ p;
    long long int g = __gcd(b1,b2);
    g = __gcd(g, b3);
    b1/=g;
    b2/=g;
    b3/=g;   
    cout << b1 << " " << b2 << " " << b3 ;
    return 0;
}