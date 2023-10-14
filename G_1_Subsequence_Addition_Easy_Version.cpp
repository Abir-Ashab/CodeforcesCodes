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
        ll sum = 0, f = 0;
        if(a[0] == 1) sum = 1;
        if(sum) {
            for(int i = 1; i < x; ++i) {
                if(sum < a[i]) {
                    f = 1;
                    break;
                }
                else sum += a[i];
            }
            if(f) cout << "NO\n";
            else cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}