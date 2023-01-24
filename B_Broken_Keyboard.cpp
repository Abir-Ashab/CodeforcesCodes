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
                bool flag = false;
                for(int i = 1; i < x; i += 3) {
                    if(s[i] != s[i+1]) {
                    flag = true;
                    break;
                    }
                }
                if(flag) cout << "NO\n";
                else cout << "YES\n";
          }
       return 0;
}