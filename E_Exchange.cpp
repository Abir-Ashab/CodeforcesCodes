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
            if(x <= y or y > z) cout << 1 << '\n';
            else {
            if(x % y == 0)cout << x/y << '\n';
            else cout << x/y + 1 << '\n';
            }
       }
       return 0;
}