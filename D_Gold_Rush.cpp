#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int, int> dp;

int res(int x, int y) {
    if(x == y or dp[y] == 1) return 1;
    if((x/3 + 2*(x/3)) != x) return 0;
    dp[x/3] = res(x/3, y);
    dp[2 * x/3 ] = res(2 * x/3 , y);
    return dp[y];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        typedef std::map<int, int> mp;
        if(res(x, y)) cout << "YES\n";
        else cout << "NO\n";
        dp.clear();
    }
    return 0;
}
