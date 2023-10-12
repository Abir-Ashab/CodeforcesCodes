#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        string s; cin >> s;
        ll ans = 0, cnt = 0;
        for(int i = 0; i < x - 1; ++i) {
            if(s[i] == s[i+1]) cnt++;
            else {
                ans = max(cnt, ans);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        cout << ans + 2 << '\n';
    }
    return 0;
}