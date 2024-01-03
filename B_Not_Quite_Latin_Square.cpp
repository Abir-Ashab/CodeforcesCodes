#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x = 3, ind;
        vector < string > v;
        for(int i = 0; i < x; ++i) {
            string s; cin >> s;
            v.push_back(s);
            for(int j = 0; j < 3; ++j) if(s[j] == '?') ind = i;
        }
        char m = 0, n = 0, p = 0;
        for( auto val : v[ind] ) {
           if(val == 'A') m = 1;
           else if(val == 'B') n = 1;
           else if(val == 'C') p = 1;
        }
        if(!m) cout << 'A' << '\n';
        else if(!n) cout << 'B' << '\n';
        else if(!p) cout << 'C' << '\n';
    }
    return 0;
}