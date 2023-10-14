#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        char mat[x][x];
        for(int i = 0; i < x; ++i) {
            for(int j = 0; j < x; ++j) { 
                cin >> mat[i][j];
            }
        }
        int ans = 0;
        while(1) {
            for(int i = 0; i < x; ++i) {
                for(int j = 0; j < x; ++j) {
                    if(mat[i][j] != mat[j][x - i - 1]) {
                        if(mat[i][j] < mat[j][x - i - 1]) mat[i][j]++;
                        else mat[j][x - i - 1]++;
                        ans++;
                    }
                }
            }
            int cnt = 0;
            for(int i = 0; i < x; ++i) {
                for(int j = 0; j < x; ++j) {
                    if(mat[i][j] == mat[j][x - i - 1]) cnt++;
                }
            }
            if(cnt == x * x) break;
        }
        cout << ans << '\n';
    }
    return 0;
}