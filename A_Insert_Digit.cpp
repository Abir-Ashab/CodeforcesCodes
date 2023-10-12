#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, d; cin >> x >> d;
        string s; cin >> s;
        vector < ll > v;
        ll f = 0;
        for(int i = 0; i < x; ++i) {
            if(s[i] - '0' >= d or f) {
                v.push_back(s[i] - '0');
            }
            else {
                v.push_back(d);
                v.push_back(s[i] - '0');
                f = 1;
            }
        }
        if(!f) v.push_back(d);
        for( auto val : v ) cout << val;
        cout << '\n';
    }
    return 0;
}