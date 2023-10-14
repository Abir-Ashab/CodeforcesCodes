#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> v;

void func() {
    v.push_back(1); v.push_back(1);
    for (int i = 0; i < 50; i++) v.push_back(v[i] + v[i + 1]);
}
int calc(ll n,ll x, ll y) {
    if (n == 1) return 1;

    ll a = min(y, v[n + 1] - y + 1);
    if (a > v[n + 1] - v[n]) return 0;
    y = min(y, v[n + 1] - y + 1);
    ll k = calc(n - 1,y, x);
    return k;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    func();
    while(test--) {
        ll x, y, n;
        cin >> n >> x >> y;
        if (calc(n, x, y))cout << "YES\n";
        else cout << "NO\n";
    }
}
