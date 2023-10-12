#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x+2];
        for(int i = 0; i < x; ++i) cin >> a[i];
        ll cnt = 0, ans = 0;
        for(int i = 0; i < x; ++i) {
            if(a[i] == 1) {
                ans = max(ans, cnt);
                cnt = 0;
            }
            else cnt++;
        }
        ans = max(cnt, ans);
        cout << ans << '\n';
    }
    return 0;
}