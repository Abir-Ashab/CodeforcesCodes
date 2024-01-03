#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll n; cin >> n;
        if (n == 1) {
        cout << 1 << endl;
    }

    int ns = n / 2 + 1;

    for (int i = 0; i < ns - 1; ++i) {
        string x = "1" + string(i, '0') + "3" + string(ns - 2 - i, '0');
        cout << pow(stoll(x), 2) << " ";
    }

    for (int i = 0; i < ns - 1; ++i) {
        string x = "3" + string(i, '0') + "1" + string(ns - 2 - i, '0');
        cout << pow(stoll(x), 2) << " ";
    }

    string x = "14" + string(ns - 2, '0');
    cout << pow(stoll(x), 2) << endl;
    }
    return 0;
}