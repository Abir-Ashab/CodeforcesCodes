#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n;
        map<int, int> a;
        ll res = 0;
        for (int i = 0; i < n; i++) {
        int x; cin >> x; 
        x -= i; res += a[x];
        a[x]++;
        }
        cout << res << endl;
    }
    return 0;
}