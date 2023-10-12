#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x; cin >> x;
    ll ans[x];
    for(int i = 1; i <= x; ++i) {
       ll y; cin >> y; ans[y] = i;
    }   
    for(int i = 1; i <= x; ++i) cout << ans[i] << ' ';          
    return 0;
}