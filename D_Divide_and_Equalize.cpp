#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool func(int a, vector<int>& v) {
    int mx = 0;
    for (auto l : v) mx = max(l, mx);
    map<int, int> mp;
    for (auto l : v) {
        if (l == a) continue;
        int gcd = __gcd(a, l), k = a / gcd, m = l / gcd;
        for (int i = 2; i * i <= k; ++i) {
            bool pos = 0;
            while (k % i == 0) {
                pos = 1;
                k /= i;
                mp[i]++;
            }
        }
        for (int i = 2; i * i <= m; ++i) {
            bool pos = 0;
            while (m % i == 0) {
                pos = 1;
                m /= i;
                mp[i]++;
            }
        }
        if (k > 1) mp[k]++;
        if (m > 1) mp[m]++;
    }
    for (auto pair : mp) {
        int a = pair.first;
        int b = pair.second;
        if (b)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--) {
        int x;
        cin >> x;
        vector<int> v(x);
        for (auto &l : v)
            cin >> l;
        sort(v.begin(), v.end());
        int xx = v[x / 2], yy = v[(x + 2) / 2], zz = v[(x - 1) / 2];
        bool pos = 0;
        pos |= func(xx, v);
        pos |= func(yy, v);
        pos |= func(zz, v);
        if (pos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
