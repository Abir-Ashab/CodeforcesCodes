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
            string s;
            cin >> s;
            ll ct1 = 0, ct2 = 0, mx = 0, cnt1 = 0, cnt2 = 0;
            for(int i = 0; i < x; ++i) {
                    if(s[i] == '1') {ct1++; ct2 = 0;}
                    else if(s[i] == '0') {ct2++; ct1 = 0;}
                    if(s[i] == '1') cnt1++;
                    else cnt2++;

                    mx = max(ct1, mx);
                    mx = max(mx, ct2);

                    //cout << mx << ' ';
            }
            ll ans2 = cnt1 * cnt2;
            ll ans = max(mx*mx, ans2);
            cout << ans << '\n';
       }
       return 0;
}