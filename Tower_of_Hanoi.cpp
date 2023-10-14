#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector < pair<ll,ll>> v;

void solve(int a, int b, int c, int n) {
    if (n == 0)
        return;
    solve(a, c, b, n - 1);
    v.push_back({a, c});
    solve(b, a, c, n - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    solve(1, 2, 3, n);
    cout << v.size() << '\n';
    for( auto val : v ) cout << val.first << ' ' << val.second << '\n';
}