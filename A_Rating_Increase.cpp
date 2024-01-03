#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;
        string ans1, ans2;
        ll f = 0;
        for(int i = 0; i < s.size() - 1; ++i) {
            ans1 += s[i];
            ans2 = s.substr(i + 1, s.size());
            if(ans2[0] != '0' and stoi(ans2) > stoi(ans1)) {
                f = 1;
                cout << ans1 << ' ' << ans2 << '\n';
                break;
            }
        }
        if(!f) cout << -1 << '\n';
    }
    return 0;
}