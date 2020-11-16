#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], b[n];
        ll mi = (ll)1e10;
        unordered_map<ll,ll> total;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total[a[i]]++;
            mi = min(mi, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            total[b[i]]++;
            mi = min(mi, b[i]);
        }

        unordered_map<ll,ll> correct;
        bool pos = 1;
        for (auto qQ : total)
        {
            if (qQ.second % 2)
            {
                pos = 0;
                break;
            }
            else
            {
                correct[qQ.first] = qQ.second / 2;
            }
        }
        if (!pos)
        {
            cout << -1 << endl;
            continue;
        }
        unordered_map<ll,ll> ref = correct;
        vector<ll> var1, var2;
        for (int i = 0; i < n; i++)
        {
            if (ref[a[i]])
            {
                ref[a[i]]--;
            }
            else
            {
                var1.push_back(a[i]);
            }
        }
        ref = correct;
        for (int i = 0; i < n; i++)
        {
            if (ref[b[i]])
            {
                ref[b[i]]--;
            }
            else
            {
                var2.push_back(b[i]);
            }
        }
        if (var1.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (var1.size() != var2.size())
        {
            cout << -1 << endl;
            continue;
        }
        ll out_door = 0;
        sort(var1.begin(), var1.end());
        sort(var2.begin(), var2.end(), greater<>());
        for (int i = 0; i < var1.size(); i++)
        {
            out_door += min(2 * mi, min(var1[i], var2[i]));
        }
        cout << out_door << endl;
    }
}
