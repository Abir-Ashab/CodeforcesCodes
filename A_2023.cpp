#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool divisors[3000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, k; cin >> x >> k;
        ll mul = 1, a[x];
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            mul *= a[i];
        }
        if (2023 % mul == 0) {
            cout << "YES" << '\n';
            cout << 2023 / mul << " ";
            for (int i = 1; i <= k - 1; i++) cout << 1 << " ";
            cout << '\n';
        }
        else  cout << "NO" << '\n';
    }
    return 0;
}