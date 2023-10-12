#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x; cin >> x;
    ll a[x+2], sum = 0;
    for(int i = 0; i < x; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    sum = sum/2;
    ll sm = 0, i;
    sort(a, a + x, greater<ll>());
    for(i = 0; i < x; ++i) {
        sm += a[i];
        if(sm > sum) break;
    }
    cout << i + 1 << '\n';
    return 0;
}