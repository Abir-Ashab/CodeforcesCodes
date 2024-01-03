#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while (test--) {
        int x; cin >> x;
        ll a[x];
        for(int i = 0; i < x; ++i) cin >> a[i];
        ll sum = 0, cnt = 0;
        for (int i = 0; i < x; i++) {
            sum += a[i];
            if (a[i] % 2 != 0) cnt++;
            if (cnt < 2) {
                if (sum % 2 != 0 and i != 0)
                    cout << sum - 1 << ' ';
                else
                    cout << sum << ' ';
            }
            else if (cnt % 2 == 0)
            {
                ll b = ((cnt - 2) / 3);
                if ((cnt - 2) % 3 != 0)  b += 2;
                cout << sum - b << ' ';
            }
            else
            {
                ll b = ((cnt - 2) / 3);
                if ((cnt - 2) % 3 != 0) b++;
                cout << sum - b << ' ';
            }

        }
        cout << '\n';
    }
    return 0;
}