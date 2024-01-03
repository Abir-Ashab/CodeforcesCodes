#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n;
        ll a[n], b[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++) v[i] = {a[i] + b[i], i};
        sort(v.begin(), v.end());
        ll ans = 0, cnt = 0;
        for(ll i = n - 1; i >= 0; i--) {
            if (cnt % 2 == 0) ans += a[v[i].second] - 1;
            else ans -= b[v[i].second] - 1;
            cnt++;
        }
        cout << ans << '\n';
    }
}
