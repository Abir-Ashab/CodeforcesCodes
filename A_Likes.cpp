#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n; 
        ll plus = 0, minus = 0; 
        for(ll i = 0; i < n; ++i) {
            ll a; cin >> a;
            if(a > 0) plus++;
            else minus++;
        } 
        ll p = plus, m = minus;
        vector < ll > ans1, ans2;
        ll k = 0;
        while(plus--) {
            k++;
            cout << k << ' ';
        }
        while(minus--) {
            k--;
            cout << k << ' ';
        }
        cout << '\n';
        k = 0;
        ll f = 0;
        while(p or m) {
            if(m and p) {
                cout << 1 << ' ' << 0 << ' ';
                p--;
                m--;
            }
            else if(p){
                k++;
                cout << k << ' ';
                p--;
            }
            else if(m) {
                k--;
                cout << k << ' ';
                m--;
            }
            
        }
        cout << '\n';
    } 
    return 0;
}