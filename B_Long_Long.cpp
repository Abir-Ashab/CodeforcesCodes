#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x], sum = 0;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            sum += abs(a[i]);
        }
        ll ans = 0;
        for(int i = 0; i < x; ++i) {
            if(a[i] < 0) {
                ans++;
                while(a[i] <= 0 and i < x) i++;
            }
        }
        cout << sum << ' ' << ans << '\n';
    }
    return 0;
}