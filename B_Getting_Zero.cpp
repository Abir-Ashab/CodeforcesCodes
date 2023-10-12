#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 32768;

int func(int x, int cnt1, int cnt2) {
    cout << x << ' ';
    if(x == 0) return 0;
    ll ans1, ans2;
    ans1 = func((x + 1) % MOD, cnt1++, cnt2);
    ans2 = func((2 * x) % MOD, cnt1, cnt2++);
    return min(ans1, ans2);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        cout << func(x, 0, 0) << '\n';
    }
    return 0;
}