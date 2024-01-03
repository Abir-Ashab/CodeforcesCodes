#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x], neg = 0, zero = 0;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            if(a[i] < 0) neg++;
            if(a[i] == 0) zero = 1;
        }
        if(neg % 2) cout << 0 << '\n';
        else if(zero) cout << 0 << '\n';
        else cout << 1 << '\n' << 1 << ' ' << 0 << '\n';
    }
    return 0;
}