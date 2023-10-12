#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll m, n, x; cin >> m >> n >> x;
        if(x != 1) {
            cout << "YES\n";
            cout << m << '\n';
            for(int i = 0; i < m; ++i) cout << 1 << ' ';
            cout << '\n';
        }
        else if(m == 1 or n <= 1) cout << "NO\n";
        else {
            if(m % 2 == 0) {
                cout << "YES\n";
                cout << m/2 << '\n';
                for(int i = 0; i < m/2; ++i) cout << 2 << ' ';
                cout << "\n";
             }
             else if(n > 2) {
                cout << "YES\n";
                cout << (m - 3)/2 + 1 << '\n';
                for(int i = 0; i < (m - 3)/2; ++i) cout << 2 << ' ';
                cout << 3 << '\n';
             }
             else cout << "NO\n";
        }
    }
    return 0;
}