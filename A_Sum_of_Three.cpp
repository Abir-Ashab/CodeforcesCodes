#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll f = 1;
        for(int i = 2; i < 1000; ++i) {
            ll s = x - i - 1;
            if(s > 0 and s % 3 != 0 and i % 3 != 0 and s != i and i != 1 and s != 1) {
                f = 0;
                cout << "YES\n";
                cout << 1 << ' ' << i << ' ' << s << '\n';
                break;
            }
        }
        if(f) cout << "NO\n";
    }
    return 0;
}