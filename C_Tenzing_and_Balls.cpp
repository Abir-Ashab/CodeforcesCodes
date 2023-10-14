#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x], ans = 0, cnt = 0;
        vector < ll > v;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            a[i]--;
        }
        vector<int> dp(x + 1, 0), f(x, -1e9);
        for (int i = 0; i < x; i++) {
            dp[i + 1] = max(dp[i], f[a[i]] + i + 1);
            f[a[i]] = max(f[a[i]], dp[i] - i);
            // cout << dp[i+1] << ' ' << f[a[i]] << '\n';
        }
        cout << dp[x] << "\n";
    }
    return 0;
}