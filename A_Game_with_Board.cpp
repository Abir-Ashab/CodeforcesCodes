#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n;
        if (n >= 5) {
        cout << "Alice\n";
        } else {
        cout << "Bob\n";
        }
    }
    return 0;
}
