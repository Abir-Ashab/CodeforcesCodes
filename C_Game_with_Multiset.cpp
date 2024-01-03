#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < ll > v(100, 0);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q; cin >> q;
    multiset<ll> elements;
    while (q--) {
        ll x, y; cin >> x >> y;
        vector < ll > v2 = v;
        if(x == 1) v[y]++;
        else {
            ll f = 1;
            for(int b = 0; b < 30; ++b) {
                if((y >> b) % 2 != 0) {
                    if(v2[b]) v2[b]--;
                    else f = 0;
                }
                v2[b + 1] += v2[b]/2;
            }
            if(f) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
