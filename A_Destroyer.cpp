#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        ll a[x];
        map<int, int> mp;
        for(int i = 0; i < x; ++i) {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll mx = *max_element(a, a + x);
        ll prev = -1,ans = 1, sec = 1e6;
        for( auto val : mp ) {
           if((val.first != prev + 1) or (val.second > sec ) and val.first <= mx) {
            ans = 0; break;
           } 
           prev = val.first;
           sec = val.second;
        }
        cout << (ans ? "YES\n" :"NO\n") ;
    }
    return 0;
}