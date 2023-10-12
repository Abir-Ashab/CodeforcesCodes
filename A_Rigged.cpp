#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        vector <pair<ll, ll>> v;
        for(int i = 0; i < x; ++i) {
            ll m, y; cin >> m >> y;
            v.push_back({m, y});
        }
        ll a = v[0].first, b = v[0].second, f = 0, ans = -1;
        for(int i = 1; i < x; ++i) {
            if(v[i].second >= b and v[i].first >= a) {
                f = 1;
            }
        }
        if(f) cout << ans << '\n'; 
        else cout << a << '\n';
    }
    return 0;
}
