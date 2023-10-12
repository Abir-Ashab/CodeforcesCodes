#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x, k; cin >> x >> k;
    string s;
    ll ans = 0;
    for(int i = 0; i < x; ++i) {
        cin >> s;
        set < ll > d;
        vector < ll > v;
        for(int j = 0; j < s.size(); ++j) {
            ll sz = d.size();
            d.insert(s[j] - '0');
            if(d.size() != sz) v.push_back(s[j] - '0');

        }

        sort(v.begin(), v.end());
        bool flag = true;
        for(int j = 0; j <= k; ++j) {
            if(v[j] != j) {
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }        
    cout << ans ;      
    return 0;
}