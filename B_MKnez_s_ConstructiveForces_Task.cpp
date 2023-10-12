#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        if(x % 2 == 0) {
            cout << "YES\n";
            ll f = 1;
            while(x --) {
                if(f) {
                    cout << 1 << ' ';
                    f = 0;
                 }else {
                    cout << -1 << ' ';
                    f = 1;
                 }
            } 
            cout << '\n';
        }
        else if(x >= 5 and x % 2 !=  0) {
            cout << "YES\n";
            ll a = x/2, b = x/2 - 1;
            ll f = 1;
            while(x --) {
                if(f) {
                    cout << -b << ' ';
                    f = 0;
                 }else {
                    cout << a << ' ';
                    f = 1;
                 }
            } 
            cout << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}