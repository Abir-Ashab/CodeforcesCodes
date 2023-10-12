#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        if(min(abs(x), abs(y)) == 0) {
            cout << 2 * (abs(x) + abs(y)) - 1 << '\n';
        }
        else {
            ll ans1 = 2 * min(abs(x), abs(y));
            ll ans2 = max(abs(x), abs(y));
            ll ans;
            if(!abs(abs(x) - abs(y))) ans = ans1;
            else if(abs(abs(x) - abs(y)) == 1) ans = ans1 + 1;
            else ans = ans1 + 2 * abs(abs(x) - abs(y)) - 1;
            cout << ans << '\n';
        }
    }
    return 0;
}