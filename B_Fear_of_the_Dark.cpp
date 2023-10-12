#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        int x, y; cin >> x >> y;
        int a, b; cin >> a >> b;
        int m, n; cin >> m >> n;

        double ans = 0.0;

        // Calculate the distances
        double OP = sqrt((x - m) * (x - m) + (y - n) * (y - n));
        double OA = sqrt((x - a) * (x - a) + (y - b) * (y - b));
        double OB = sqrt((a - m) * (a - m) + (b - n) * (b - n));

        // Calculate the minimum illumination radius 'w'
        ans = min({OP, OA, OB});

        cout << fixed << setprecision(10) << ans << '\n';
    }
    return 0;
}
