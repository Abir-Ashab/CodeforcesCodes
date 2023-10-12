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
        vector < char > v;
        for(int i = 0; i < x; ++i) {
            string s1 = s.substr(i + 1, x);
            if(s1.find(s[i]) != -1) {
                v.push_back(s[i]);
                i = s1.find(s[i]) + i + 1;
            }
        }
        for( auto val : v ) {
           cout << val;
        }
        cout << '\n';
    }
    return 0;
}