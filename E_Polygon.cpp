#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, f = 1; cin >> x;
        string s[x];
        for(int i = 0; i < x; ++i) cin >> s[i];
        for(int i = 0; i < x; ++i) {
            for(int j = 0; j < x; ++j) { 
                if(s[i][j] == '1' and (j+1 < x and i+1 < x) and (s[i][j+1] == '0' and s[i+1][j] == '0')) {
                    f = 0;
                    break;
                }
            }
            if(!f) break;
        }
        cout << (f == 1?"YES\n" : "NO\n");
    }
    return 0;
}