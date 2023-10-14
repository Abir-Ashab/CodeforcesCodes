#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--) {
        ll x; cin >> x;
        queue<ll> q; 
        for (int i = 0; i < x; i++) {
            ll p; cin >> p;
            q.push(p);
            while (q.front() < q.size()) q.pop();
            cout << q.size() << " ";
        }
        cout << '\n';
    }
    return 0;
}