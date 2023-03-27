#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x; cin >> x;
    ll a[x];
    int ind;
    for(int i = 0; i < x; ++i) cin >> a[i];
    sort(a, a + x);
    cout << 1 << ' ' << a[0] <<'\n';
    if(a[x-1] > 0) {
    cout << 1 << ' ' << a[x-1] << '\n';
    cout << x - 2 << ' ';
    for(int i = 1; i < x - 1; ++i) cout << a[i] << ' ';
    cout << '\n';
    }
    else {
        for(int i = x - 1; i > 1; --i) {
            if(a[i] < 0) {
                ind = i;
                break;
            }
        }
        cout << 2 << ' ' << a[ind] << ' ' << a[ind - 1] << '\n';
        cout << ind - 1 << ' ';
        for(int i = 1; i < ind - 1; ++i) cout << a[i] << ' ';
        cout << a[x-1] << '\n';
    }
    return 0;
}