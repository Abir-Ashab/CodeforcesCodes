#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y, h; cin >> x >> y >> h;
        ll v[x][y];
        for(ll i = 0; i < x; ++i) {
            for(ll j = 0; j < y; ++j) { 
                cin >> v[i][j];
            }
        }
        vector<pair<ll, ll>> p;
        for(ll i = 0; i < x; ++i) {
            ll sum = 0, cnt = 0, pen = 0;
            sort(v[i], v[i] + y);
            for(ll j = 0; j < y; ++j) { 
                if(sum + v[i][j] <= h) {
                    cnt++;
                    pen += (v[i][j] + sum);
                    sum += v[i][j];
                }
            }
            p.push_back({cnt, pen});
        }
        ll k1 = p[0].first, k2 = p[0].second, rank = 1;
        for( auto val : p ) {
           if( val.first == k1 and (val.second < k2)) {
                rank++;
           }
           else if( val.first > k1) {
                rank++; 
           }
        }
        cout << rank << '\n';
    }
    return 0;
}