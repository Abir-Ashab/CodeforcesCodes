#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--)
    {
        ll x;
        cin >> x;
        vector<ll> v;
        for (int i = 0; i < x; ++i)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        ll mx = v[x - 1], ans = 0;
        for (int i = 1; i < mx; ++i)
        {
            ll k = lower_bound(v.begin(), v.end(), i) - v.begin();
            if(k >= 0 and k < x) {
            ans += abs(v[k] - i);
            v[k] = i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}