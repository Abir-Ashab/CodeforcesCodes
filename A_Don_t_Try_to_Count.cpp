#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        string s, t; cin >> s >> t;
        int ans = 0, a = 1, tt = 6;
        while(tt--) {
            if(s.find(t) != -1) {
                a = 0;
                cout << ans << '\n';
                break;
            }
            else {
                ans++;
                s += s; 
            }
        }
        if(a) cout << -1 << '\n';
    }
    return 0;
}