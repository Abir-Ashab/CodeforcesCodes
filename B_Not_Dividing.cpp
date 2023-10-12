#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--)
    {
        ll x; cin >> x; ll a[x + 2];
        for (int i = 0; i < x; i++) {
            cin >> a[i];
            if (a[i] == 1) a[i]++;
        }
        for (int i = 0; i < x - 1; i++){
            if ((a[i + 1] % a[i]) == 0) a[i + 1]++;
        }
        for (int i = 0; i < x; i++) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}