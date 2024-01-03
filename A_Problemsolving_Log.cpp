#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    map<char, int>v;
    char ch = 'A';
    for(int i = 1; i <= 26; ++i) {
        v[ch] = i;
        ch++;
    }
    while(test--) {
        ll x; cin >> x;
        string s; cin >> s;
        map<char, int>mp;
        for(int i = 0; i < x; ++i) {
            mp[s[i]]++;
        }
        ll ans = 0;
        for(auto val : mp) {
            if(mp[val.first] >= v[val.first]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}