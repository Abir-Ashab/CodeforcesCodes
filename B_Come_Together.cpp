#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        ll x1, y1; cin >> x1 >> y1;
        ll x2, y2; cin >> x2 >> y2;
        ll ans = 0;
        if((x1 < x and x2 < x) or (x2 > x and x1 > x)) {
            ans += min(abs(x2 - x), abs(x1 - x));
        }
        if((y1 < y and y2 < y) or (y2 > y and y1 > y)) {
            ans += min(abs(y2 - y), abs(y1 - y));
        }
        cout << ++ans << '\n';
    }
    return 0;
}