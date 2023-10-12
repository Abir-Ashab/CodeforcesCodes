#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x, y; cin >> x >> y;
    ll a[x];
    for(int i = 0; i < x; ++i) cin >> a[i];
    y--;
    ll ans = 0;
    if(a[y]) ans++;
    for(int i = 1; i < x; ++i) {
        if(y + i < x and y - i < 0 and a[y+i]) ans++;
        else if(y + i >= x and y - i >= 0 and a[y-i]) ans++;
        else if(y + i < x and y - i >= 0 and a[y-i] and a[y+i]) ans += 2;
    }
    cout << ans << '\n';
    return 0;
}