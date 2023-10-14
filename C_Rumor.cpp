#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e5 + 9;
bool vis[N];
ll a[N]; 
vector < ll > vertex[N];
vector < ll > cnt;

void dfs(ll source) {
   vis[source] = 1;
   cnt.push_back(a[source]);
   for( auto val :vertex[source] ) {
      if(!vis[val]) { 
        dfs(val);
        cnt.push_back(a[val]);
      }
   }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x, y; cin >> x >> y;
    for(ll i = 1; i <= x; ++i) cin >> a[i];
    ll source = 0;
    vector < ll > s;
    while(y--) {
        ll u, v; cin >> u >> v;
        vertex[u].push_back(v);
        vertex[v].push_back(u);
        s.push_back(u);
    }
    ll ans = 0;
    for( auto val : s ) {
        if(!vis[val]) {
            dfs(val);
            ans += *min_element(cnt.begin(),cnt.end());
            cnt.clear();
        }
    }
    for(ll i = 1; i <= x; ++i) {
        if(!vis[i]) ans += a[i];
    }
    cout << ans << '\n';
    return 0;
}