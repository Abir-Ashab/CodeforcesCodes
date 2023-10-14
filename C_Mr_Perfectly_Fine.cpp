#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll ans1 = N, ans2 = N, ans = N;
        while(x--) {
            ll time;
            string s;
            cin >> time >> s;
            if(s[0] == '1' and s[1] == '1') {
                ans = min(ans,time);
            }
            else if(s[0] == '1') {
                ans1 = min(ans1, time);
            }
            else if(s[1] == '1') {
                ans2 = min(ans2, time);
            }
        }
        if( min(ans, ans1 + ans2) != N) cout << min(ans, ans1 + ans2) << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}