#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPerfectSquare(ll val) {
    ll lo = 1;
    ll hi = 1e9+1;

    while(hi - lo > 1) {
        ll mid = (lo + hi)/2;

        if(mid*mid == val) {
            return mid;
        }else if(mid*mid < val) {
            lo = mid;
        }else {
            hi = mid;
        }
    }
    if(lo*lo == val) {
        return lo;
    }else if(hi*hi == val) {
        return hi;
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x], sum = 0;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            sum += a[i];
        } 
        if(isPerfectSquare(sum)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}