#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, x;
       cin >> test;
       while(test--) {
            cin >> x;
            ll a[x+2];
            ll b[] = {0, 0, 0};
            for(int i = 0; i < x; ++i) cin >> a[i];
            for(int i = 0; i < x; ++i) {
                if(a[i] % 3 == 0) b[0]++;
                else if(a[i] % 3 == 1) b[1]++;
                else b[2]++;
            }
            int m = x/3;
            ll cnt = 0;
            while(1) {
                if(b[0] == b[1] and b[1] == b[2])break;
                if(b[0] > m) {b[1]++; b[0]--;}
                else if(b[1] > m) {b[2]++; b[1]--;}
                else if(b[2] > m) {b[0]++; b[2]--;}
                cnt++;
            }
            cout << cnt << '\n';
       }
       return 0;
}