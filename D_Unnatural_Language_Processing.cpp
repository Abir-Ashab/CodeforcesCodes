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
        string ans = "";
        bool v = false;
        for(int i = 0; i < x; i++) {
            if(s[i] == 'a' || s[i] == 'e') {
                ans += s[i];
                v = true;
                if(i + 2 < x and (s[i+2] == 'a' or s[i+2] == 'e')) {
                    v = false;
                    ans += '.';
                }
            }else {
                ans += s[i];
                if(v) {
                    ans += '.';
                    v = false;
                }
            }
        }
        if(ans.back() == '.') {
            ans.pop_back();
        }
        cout << ans << endl;
    }
    return 0;
}