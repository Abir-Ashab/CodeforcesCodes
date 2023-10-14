#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5;

bool f[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    cin >> x;
    for (int i = 2; i < N; ++i) {
        if (!f[i]) {
            cout << i << ' ';
            for (int j = i * i; j < N; j += i) {
                f[j] = 1;
            }
        }
    }
    return 0;
}