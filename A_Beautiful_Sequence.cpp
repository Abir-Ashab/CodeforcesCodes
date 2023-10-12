#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x+1];
        ll f = 0;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            if(i + 1 >= a[i]) {
                f = 1;
            }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}