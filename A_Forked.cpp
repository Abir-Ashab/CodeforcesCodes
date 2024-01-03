#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll a, b; cin >> a >> b;
        ll x, y; cin >> x >> y;
        ll m, n; cin >> m >> n;
        vector < ll > v1[8] = {{x - a, y - b}, {x + a, y + b}, {x - a, y + b}, {x + a, y - b}, {x - b, y - a}, {x + b, y + a}, {x - b, y + a}, {x + b, y - a}}; 
        vector < ll > v2[8] = {{m - a, n - b}, {m + a, n + b}, {m - a, n + b}, {m + a, n - b}, {m - b, n - a}, {m + b, n + a}, {m - b, n + a}, {m + b, n - a}}; 
        ll ans = 0;
        set < vector < ll > > d;
        for(int i = 0; i < 8; ++i) {
            for(int j = 0; j < 8; ++j) { 
                if(v1[i][0] == v2[j][0] and v1[i][1] == v2[j][1]) {
                    d.insert({v1[i][0], v1[i][1]});
                }
            }
        }
        cout << d.size() << '\n';
    }
    return 0;
}