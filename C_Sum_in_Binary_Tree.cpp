#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll ans = 0;
        while(x) {
            ans += x;
            x /= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}