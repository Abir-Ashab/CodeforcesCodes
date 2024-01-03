#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        ll a[x], b[x];
        for(int i = 0; i < x; ++i) cin >> a[i];
        for(int i = 0; i < x; ++i) cin >> b[i];
        ll ans = 0, sum = 0 ,mx = 0;
        for(int i = 0; i < x; ++i) {
            if(i >= y) break;
            sum += a[i];
            mx = max(b[i],mx);
            ll p = sum + mx * ( y - i - 1);
            ans = max(p, ans);
        }
        cout << ans << '\n';
    }
    return 0;
}
