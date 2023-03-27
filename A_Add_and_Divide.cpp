#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        ll ans = 99999999999;
        if(x < y) ans = 1;
        else {
            ll m = y;
            if(y == 1) {
                m++;
            }
            for(int i = m; i <= y + 50; ++i) {
                ll ans1 = 0;
                ans1 += (i - y);
                ll a = x;
                while(a) {
                    a /= i;
                    ans1++;
                }
                ans = min(ans, ans1);
            }  
        }
        cout << ans << '\n';
    }
    return 0;
}