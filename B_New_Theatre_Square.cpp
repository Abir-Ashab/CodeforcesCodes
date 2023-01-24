#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, x, y, z;
       cin >> test;
       while(test--) {
            string s;
            ll m, sum = 0;
            cin >> x >> m >> y >> z;
            while(x--) {
                cin >> s;
                for(int i = 0; i < m;) {
                if(s[i] == s[i+1] and s[i] == '.') {
                    sum += min(2*y, z);
                    i += 2;
                } else if(s[i] == '.') {
                    sum += y;
                    i++;
                }
                else i++;
                }
            }
            cout << sum << '\n';
          }
       return 0;
}