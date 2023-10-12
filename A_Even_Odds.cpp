#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x, k; cin >> x >> k;
    if(x % 2 == 0) {
        if(k <= x/2) {
            cout << 2 * k - 1 << '\n';
        }
        else cout << (k - x/2) * 2 << '\n';
    }
    else {
        if(k <= x/2 + 1) {
            cout << 2 * k - 1 << '\n';
        }
        else cout << (k - x/2 - 1) * 2 << '\n';
    }
    return 0;
}