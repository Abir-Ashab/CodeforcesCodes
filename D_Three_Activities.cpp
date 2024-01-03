#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) { 
        ll x;
        cin >> x;
        vector<pair<ll, ll>> a(x);
        for (ll j = 0; j < x; ++j) {
            cin >> a[j].first;
            a[j].second = j + 1;
        }
        sort(a.rbegin(), a.rend());
        vector<pair<ll, ll>> b(x);
        for (ll j = 0; j < x; ++j) {
            cin >> b[j].first;
            b[j].second = j + 1;
        }
        sort(b.rbegin(), b.rend());
        vector<pair<ll, ll>> c(x);
        for (ll j = 0; j < x; ++j) {
            cin >>c[j].first;
            c[j].second = j + 1;
        }
        sort(c.rbegin(), c.rend());
        ll ans = 0;
        for (ll x = 0; x < 3; ++x) {
            for (ll y = 0; y < 3; ++y) {
                for (ll z = 0; z < 3; ++z) {
                    if (a[x].second != b[y].second && a[x].second != c[z].second && b[y].second != c[z].second) {
                        ans = max(ans, a[x].first + b[y].first + c[z].first);
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
