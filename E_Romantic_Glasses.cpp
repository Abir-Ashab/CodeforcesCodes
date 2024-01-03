#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n;
        ll ans = 0;
        map<ll, ll> mp;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        mp[0] = 1;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) sum += a[i];
            else  sum -= a[i];  
            if (!sum or mp[sum]) ans = 1;
            else mp[sum]++;
        }
        if (ans) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}