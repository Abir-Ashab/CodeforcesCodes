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
        sort(a, a + x);
        ll k = x/2, mx = 0, mn = 0;
        for(int i = 0; i < k; ++i) mn += a[i];
        sort(a, a + x, greater<ll>());
        for(int i = 0; i < k; ++i) mx += a[i];
        cout << abs(mx - mn) << '\n';
    }
    return 0;
}