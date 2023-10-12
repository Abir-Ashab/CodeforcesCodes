#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;
        map<char, int>mp;
        for(int i = 0; i < s.size(); ++i) {
            mp[s[i]]++;
        }
        int cnt = 0;
        for( auto val : mp ) {
            if(val.second >= 2) cnt++;
        }
        if(cnt >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}