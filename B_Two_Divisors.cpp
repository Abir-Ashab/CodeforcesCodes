#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        if (y % x != 0) cout << x * y / __gcd(x, y) << '\n';
        else cout << y*(y/x) << '\n';
    }
    return 0;
}