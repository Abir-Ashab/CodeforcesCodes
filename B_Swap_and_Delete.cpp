#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;
        ll z = 0, one = 0;
        ll x = s.size();
        for(int i = 0; i < x; ++i) {
            if(s[i] == '0') z++;
            else one++;
        }
        ll ans = x;
        for(int i = 0; i < x; ++i) {
            if(s[i] == '1' and z > 0) {
                z--;
                ans--;
            }
            else if(s[i] == '0' and one > 0) {
                one--;
                ans--;
            }
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}