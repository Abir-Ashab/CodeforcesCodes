#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5;
bool vis[N];
vector < ll > vertex[100];

void dfs(int source) {
    vis[source] = 1;
    for( auto val :vertex[source] ) {
        if(!vis[val]) {
            dfs(val);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int u, v;
    int edge; cin >> edge;
    for(int i = 0; i < edge; ++i) {
       cin >> u >> v;
       vertex[u].push_back(v);
       vertex[v].push_back(u);
    }
    dfs(1);
    for(int i = 0; i < edge; ++i) {
        for( auto val : vertex[i] ) {
            if(!vis[val]) {
                cout << "disconnected\n";
                return 0;
            }
        }
    }
    cout << "connected\n";
    return 0;
}