#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n, k, g; cin >> n >> k >> g;
        ll div = ceil(1.0 * g/2);
        ll ans1 = (div - 1) * (n - 1);       
        ll rem = g * k - ans1;
        if(rem % g < div) ans1 += (rem % g);
        else ans1 -= abs(g - rem % g);
        ll ans2 = k * g;
        //cout << ans1 << ' ' << ans2 << '\n';
        cout << min(ans1, ans2) << '\n';
    }
    return 0;
}