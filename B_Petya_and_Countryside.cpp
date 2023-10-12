#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x; cin >> x;
    ll a[x];
    for(int i = 0; i < x; ++i) cin >> a[i];
    ll ans = 1;
    for(int i = 0; i < x; ++i) {
        ll cnt = 1;
        for(int j = i - 1; j >= 0; --j) {
            if(a[j] <= a[j+1] and j >= 0) cnt++;
            else break;
        }
        for(int k = i + 1; k < x; ++k) {
            if(a[k] <= a[k-1] and k > 0) cnt++;
            else break;
        }
        ans = max(ans, cnt);
    }     
    cout << ans << '\n';       
    return 0;
}