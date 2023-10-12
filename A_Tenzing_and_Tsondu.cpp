#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        ll a[x], b[y], sum_a = 0, sum_b = 0;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            sum_a += a[i];
        }
        for(int i = 0; i < y; ++i) {
            cin >> b[i];
            sum_b += b[i];
        }
        if(sum_a == sum_b) cout << "Draw\n";
        else {
            if((sum_a > sum_b)) cout << "Tsondu\n";
            else cout << "Tenzing\n";
        }
    }
    return 0;
}