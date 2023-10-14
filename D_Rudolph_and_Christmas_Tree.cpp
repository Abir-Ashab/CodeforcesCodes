#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n, d, h; cin >> n >> d >> h;
        vector < ll > v(n + 1);
        for(int i = 1; i <= n; ++i) {
            cin >> v[i];
        }
        double ch = h, mx = 0.0;
        for(int i = 1; i <= n; ++i) {
            double dif = (double)(v[i] - v[i-1])/(double)d;
            ch += dif;
            cout << ch << ' ';
            if(ch < 0.0) {
                ch = 0.0;
                mx = max(mx, ch);
            }
            
        }
        double ans = mx * (double)d;
        cout << ans << '\n';
    }
    return 0;
}