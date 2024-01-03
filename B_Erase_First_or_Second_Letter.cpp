#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        int n; cin >> n;
        string s; cin >> s;
        set<char> c;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            c.insert(s[i]);
            ans += (int) c.size();
        }
        cout << ans << '\n';
    }
    return 0;
}