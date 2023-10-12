#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;
        string ans = "codeforces";
        int cnt = 0;
        for(int i = 0; i < ans.size(); ++i) {
            if(ans[i] != s[i]) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}