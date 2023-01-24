// to make sorted --> shera problem
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
          int a[x+1];
          for(int i = 0; i < x; ++i) cin >> a[i];
          if(a[0] == 1) cout << "YES\n";
          else cout << "NO\n";
       }
       return 0;
}