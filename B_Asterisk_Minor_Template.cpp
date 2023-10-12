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
        string a, second;
        cin >> a >> second;
        ll n = a.size(), m = second.size(), f1 = 0, f2 = 0, f3 = 0;
        if (n == 1 and m == 1)
        {
            if (a == second)
            {
                cout << "YES" << '\n';
                cout << a << '\n';
            }
            else
                cout << "NO" << '\n';
            f1 = 1;
        }
        else if (a[0] == second[0] or a[n - 1] == second[m - 1])
        {
            cout << "YES" << '\n';
            if (a[0] == second[0])
                cout << a[0] << "*" << '\n';
            else
                cout << "*" << a[n - 1] << '\n';
            f2 = 1;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if (a[i] == second[j] and (i < n - 1 and j < m - 1) and (a[i + 1] == second[j + 1]))
                    {
                        cout << "YES" << '\n';
                        cout << "*" << a[i] << a[i + 1] << "*" << '\n';
                        f3 = 1;
                        break;
                    }
                }
                if (f3) break;
            }
            if (!f1 and !f2 and !f3) cout << "NO" << '\n';
        }
    }
    return 0;
}