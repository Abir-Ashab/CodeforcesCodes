#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n;
    cin >> n;
    ll ans=((n-1)*(n)*(n+1))/3+(n*(n+1)*(2*n + 1))/6;
    cout<<(ans * 2022) % (1000000007) << '\n';
}
int main() {
ll t, x; cin >> t;
while(t--) {
solve();
}
return 0;
}