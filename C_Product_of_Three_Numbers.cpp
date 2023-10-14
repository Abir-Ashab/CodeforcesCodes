#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll f = 0;
        for(int i = 2; i * i < x; ++i) {
            if(x % i == 0) {
                ll k = x/i;
                for(int j = 2; j * j < k; ++j) {
                    if(k % j == 0 and j != i and j != k/j and k/j != i ) {
                        cout << "YES\n";
                        cout << i << ' ' << j << ' ' << k/j  << '\n';
                        f = 1;
                        break;
                    }
                }
            }
            if(f) break;
        }
        if(!f) cout << "NO\n";
    }
    return 0;
}