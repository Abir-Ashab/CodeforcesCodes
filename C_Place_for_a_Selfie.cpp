#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--) {
        int lines, parabolas;
        cin >> lines >> parabolas;

        vector<ll> k;
        for(int i = 0; i < lines; ++i) {
            ll x; cin >> x;
            k.push_back(x);
        }
        while (parabolas--) {
            ll a, b, c;
            cin >> a >> b >> c;
            ll cal,f = 0;
            for(int i = 0; i < lines; ++i) {
                cal = abs(b - k[i]);
                if(cal*cal - 4*a*c < 0) {
                    cout << "YES\n" << k[i] << '\n';
                    f = 1;
                    break;
                }
            }
            if(!f) cout << "NO\n";
        }
    }
        return 0;
    }
