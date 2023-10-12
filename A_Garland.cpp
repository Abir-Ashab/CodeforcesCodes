#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        ll f = 0;
        for(int i = 0; i < s.size() - 1; ++i) {
            if(s[i] == s[i+1] and s[i+1] == s[i+2] and s[i+2] == s[i+3]) {
                cout << -1 << '\n';
                f = 1;
                break;
            }
            else if(s[i] == s[i+1] and s[i+1] == s[i+2]) {
                cout << 6 << '\n';
                f = 1;
                break;
            }
        }
        if(!f) cout << 4 << '\n';
    }
    return 0;
}