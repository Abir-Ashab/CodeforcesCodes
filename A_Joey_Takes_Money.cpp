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
        for(int i = 0; i < x; ++i) cin >> a[i];
        sort(a,a+x);
        ll ans = 0;
        for(int i = 0; i < x - 1; ++i) {
            a[x - 1] = a[i] * a[x-1];
            a[i] = 1;
        }
        for(int i = 0; i < x; ++i) ans += a[i];
        cout << ans*2022 << '\n';
    }
    return 0;
}