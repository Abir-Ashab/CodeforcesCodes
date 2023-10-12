#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        if(x % y == 0 or x % 2 == 0) cout << "YES\n";
        else {
            ll k = x - y;
            if(k % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}