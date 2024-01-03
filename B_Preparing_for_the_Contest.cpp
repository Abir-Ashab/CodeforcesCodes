#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y; cin >> x >> y;
        for(int i = x; i > y + 1; i--) cout << i << ' ';
        for(int i = 1; i <= y + 1; ++i) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}