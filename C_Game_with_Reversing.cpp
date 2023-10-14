#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        string s1, s2 ; cin >> s1 >> s2;
        ll ans = 0;
        for(int i = 0; i < x; ++i) {
            ll j = i;
            while(j <= x and s1[j] == s2[j]) {
                j++;
                s1[j] = s2[j];
                //cout << s1[j] << ' ' << s2[j] << '\n';
            }
            j++;
            if(j < x) s1[j] = s2[j];
            ans++;
            if(s1 == s2) break;
            ans++;
            reverse(s2.begin(), s2.end());
            if(s1 == s2) break;
        }
        cout << s1 << ' ' << s2 << '\n';
    }
    return 0;
}