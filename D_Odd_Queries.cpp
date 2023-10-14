#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        ll a[x], sum = 0, b[x];
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            sum += a[i];
            b[i] = sum;
        }
        while(y--) {
        ll m, n, k; cin >> m >> n >> k;
        ll sum2;
        if(m == 1) sum2 = b[n - 1];
        else sum2 = b[n - 1] - b[m - 2];
        ll sum3 = (n - m + 1) * k;
        ll ans = (sum - sum2 + sum3);
        if(ans % 2) cout << "YES\n";
        else cout << "NO\n";
        }
    }
    return 0;
}