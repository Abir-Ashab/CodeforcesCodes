#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6;
ll f[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    vector < ll > v;
    while(test--) {
        ll x; cin >> x;
        v.push_back(x);
        f[x]++;
    }
    ll k = *max_element(v.begin(), v.end());
    for(int i = 1; i <= N; ++i) {
        if(!f[i]) f[i] = f[i-1];
        else f[i] += f[i-1];
    }
    ll q; cin >> q;
    ll a;
    for(int i = 0; i < q; ++i) {
        cin >> a;
        if(a <= N) cout << f[a] << '\n';
        else cout << f[N-1] << '\n';
    }    
    return 0;
}