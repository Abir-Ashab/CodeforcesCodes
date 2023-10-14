#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll first[x], final[2*x];
        ll length = x - 1;
        for(int i = 0; i < length; ++i) cin >> first[i];
        final[0] = first[0];
        final[length] = first[length-1];
        for(int i = 1; i < length ; ++i) {
            final[i] = min(first[i], first[i-1]);
        } 
        for(int i = 0; i < length + 1; ++i) cout << final[i] << ' ';
        cout << '\n';
    }
    return 0;
}