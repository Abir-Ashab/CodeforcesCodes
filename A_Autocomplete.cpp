#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    ll x; cin >> x;
    ll y = x;
    vector<string>v;
    while(y--) {
        string s2; cin >> s2;
        v.push_back(s2);
    }
    string ans;
    for(int i = 0; i < x; ++i) {
        if(v[i] == s) {
            cout << s;
            return 0;
        } 
        else if(v[i].substr(0, s.size()) == s) {
            if(ans.empty()) ans = v[i];
            else if(ans > v[i]){
                ans = v[i];
            }
        }
    }
    if(ans.empty()) cout << s;
    else cout << ans << '\n';
    return 0;
}