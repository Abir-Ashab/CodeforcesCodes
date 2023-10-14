#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 9;
ll cnt[N];
vector < ll > g[N];
ll ans = 0;

void dfs(int source, int par) {
    if (g[source].size() == 1 and g[source][0] == par) cnt[source] = 1; 
    for (auto val : g[source]) {
        if (val != par) {
            dfs(val, source);
            cout << "val = " << val << ' ' << " cnt[val] = " << cnt[val] << '\n';
            cnt[source] += cnt[val];
        }
    }    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        for(int i = 0; i < x - 1; ++i) {
            ll u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1, -1);
        ll q; cin >> q;
        for(int i = 0; i < q; ++i) {
            ll m, n; cin >> m >> n;  
            cout << cnt[m] * cnt[n] << '\n';
        }
        for(int i = 1; i <= x; ++i) {
            g[i].clear();
            cnt[i] = 0;
        }
    }
    return 0;
}