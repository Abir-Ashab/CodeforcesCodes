#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n;
        ll ans1 = ((n + 1) * n * (n - 1) * 2) % MOD;
 
        ll ans2 = ((n * (n + 1)) * ((2 * n + 1))) % MOD;
 
        ll ans = (337*((ans1 + ans2) % MOD)) % MOD;

        cout << ans << "\n";
    }
    return 0;
}