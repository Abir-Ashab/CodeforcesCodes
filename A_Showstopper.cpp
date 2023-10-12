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
        ll x;
        cin >> x;
        ll a[x], b[x];
        for (int i = 0; i < x; ++i)
            cin >> a[i];
        for (int i = 0; i < x; ++i)
            cin >> b[i];
        if (a[x - 1] == *max_element(a, a + x) and b[x - 1] == *max_element(b, b + x))
            cout << "YES\n";
        else
        {
            ll f = 0;
           for(int i = 0; i < x; ++i) {
                if(!(a[i] <= a[x-1] and b[i] <= b[x-1]) and !(a[i] <= b[x-1] and b[i] <= a[x-1])) {
                    f = 1;
                    break;
                }
           }
            if(f) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}