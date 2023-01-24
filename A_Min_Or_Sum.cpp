#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
       while(test--) {
         ll x; cin >> x; ll a;
         bool flag = true; ll sum  = 0;
         for(int i = 0; i < x; ++i) {
            cin >> a;
            sum = sum | a;
         }
         cout << sum << '\n';
       }
       return 0;
}