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
            ll a[x+2];
            for(int i = 0; i < x; ++i) cin >> a[i];
            sort(a, a+x);
            for(int i = x-1; i >= 0; i--) cout << a[i] << ' ';
            cout << '\n';
       }
       return 0;
}