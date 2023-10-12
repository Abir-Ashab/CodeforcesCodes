#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        ll n1 = n - x1 + 1;
        x1--; y1--; x2--; y2--;
        ll mn1 = min(x1, n - x1 - 1);
        ll mn2 = min(y1, n - y1 - 1);
        ll ans1 = (min(mn1, mn2));
        ll mn3 = min(x2, n - x2 - 1);
        ll mn4 = min(y2, n - y2 - 1);
        ll ans2 = (min(mn3, mn4));
        cout << abs(ans1 - ans2) << '\n';
    }
    return 0;
}