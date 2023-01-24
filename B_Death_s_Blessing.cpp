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
        cin >> x;
        ll a[x+1], b[x+1];
        ll s = 0;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            s += a[i];
        }
        for(int i = 0; i < x; ++i) {
            cin >> b[i];
            s += b[i];
        }
        sort(b, b+x);
        cout << s - b[x-1] << '\n';
       }
       return 0;
}