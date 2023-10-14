#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll a, b, c;
        cin >> a >> b >> c;
        set < ll > d;
        d.insert(a);
        d.insert(b);
        d.insert(c);
        vector < ll > v(d.begin(), d.end());
        if(d.size() == 1 or v[0] + v[1] == v[2]) {
            cout << "YES\n";
        }
        else if(v.size() == 2 and v[1] % v[0] and v[1] <= pow(v[0], 3)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}