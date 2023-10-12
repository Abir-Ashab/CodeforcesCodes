#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x];
        set < ll > d;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            d.insert(a[i]);
        }
        sort(a, a + x, greater<ll>());
        ll f = 0, sum[x];
        if(a[0] == a[1] and d.size() == 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << a[0] << ' ' << a[x-1] << ' ';
            for(int i = 1; i < x - 1; ++i) cout << a[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}