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
        ll track[x], f = 0;
        for(int i = 0; i < x; ++i) {
            for(int j = i; j < x; ++j) { 
                if(s[i] == s[j] and i % 2 != j % 2) {
                    f = 1;
                    break;
                }
            }
        } 
        if(f) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}