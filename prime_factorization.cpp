#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6;

int spf[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x; cin >> x;
    for(int i = 2; i < N; ++i) spf[i] = i;

    for (int i = 2; i < N; ++i) {
        for (int j = i; j < N; j += i) {
            spf[j] = min(spf[j], i);
        }
    }
    // for(int i = 2; i <= 20; ++i) cout << i << " = " << spf[i]  << '\n';
    // cout << '\n';
    while(x--) {
        ll n; cin >> n;
        while(n > 1) {
            cout << spf[n] << ' ';
            n /= spf[n];
        } 
        cout << '\n';
    }
    return 0;
}