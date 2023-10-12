#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s1, s2; cin >> s1 >> s2;
        ll sz1 = s1.size(), sz2 = s2.size();
        if(s1.size() < s2.size()) {
            ll diff = abs(sz1 - sz2);
            for(int i = 0; i < diff; ++i) {
                s1 = "0" + s1;
            }
        }
        else if(s1.size() > s2.size()) {
            ll diff = abs(sz1 - sz2);
            for(int i = 0; i < diff; ++i) {
                s2 = "0" + s2;
            }
        }
        ll ans = abs((s1[0] - '0') - (s2[0] - '0'));
        ll prev = ans;
        for(int i = 1; i < max(s1.size(), s2.size()); ++i) {
            if(prev) ans += 9;
            else {
                ans += abs((s1[i] - '0') - (s2[i] - '0'));
                prev = abs((s1[i] - '0') - (s2[i] - '0'));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}