#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
       while(test--) {
        ll x; cin >> x; ll i = 0, store = x;
        if(x == 1) cout << 3 << '\n';
        else if(x % 2 and x > 1) cout << 1 << '\n';
        else { 
        while(x % 2 != 1){
            x /= 2;
            i++;
        }
        x = pow(2, i);
        if((store & (store - 1)) == 0) cout << x + 1 << '\n';
        else cout << x << '\n';
        }
       }
       return 0;
}