#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;

void solve()
{
    ll n;
    cin >> n;
    int k = 1;
    ll low = 1, high = n;
    ll t = n;

    // Assuming truth on odd k
    while (1)
    {
        
        ll mid = (ll)(high + low) / 2;
        cout << mid << "\n";
        char c;
        cin >> c;
        if (c == 'E')
        {
            break;
        }

        // Search converged at one number still answer not found
        if (low == high)
        {
            // Reset low and high.
            // Try for truth on even k
            low = 1;
            high = n;
            k++;
            break;
        }

        if (k % 2 == 1)
        {
            if (c == 'G')
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        k++;
    }

    // Assuming truth on odd k
    while (1)
    {
        ll mid = (ll)(high + low) / 2;
        cout << mid << "\n";
        char c;
        cin >> c;
        if (c == 'E')
        {
            break;
        }

        if (k % 2 == 0)
        {
            if (c == 'G')
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        k++;
    }
}

int main()
{
    solve();
} 