#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_prime(int n) {
    for(int i = 2; i*i <= n ; ++i){
        if(n % i == 0) return false;
    }
    return true;
} 
int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, x;
       cin >> test;
       ll cnt = 0;
          while(test--) {
                cin >> x;
                if(x % 2 == 0) cout << x/2 << ' ' << x/2 << '\n';
                else if(is_prime(x)) cout << x-1 << ' ' << 1 << '\n';
                else {
                    int ans = 0;
                    for(int i = 2; i*i <= x ; ++i){
                     if(x % i == 0) {
                     int store = x/i;
                     ans = max(ans,max(i, store));
                     }
                    }
                    cout << ans << ' ' << x - ans << '\n'; 
                }
          }
       return 0;
}