#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, x;
       cin >> test;
       ll cnt = 0;
       while(test--) {
            ll y, z;
            cin >> x >> y >> z;
            if(x >= z) cout << -1 << ' ' << y << '\n';
            else {
                cout << 1 << ' ';
                ll i = y,j = z;
                if(x * y <= z) cout << -1 << '\n';
                else {
                while(1) {
                    ll m = x*i;
                    if(m > j) {
                        cout << i << '\n';
                        break;
                    }
                    if(i == j) j += z;
                    i++;
                }
                }
            }
       }
       return 0;
}