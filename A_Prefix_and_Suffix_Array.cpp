#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> input(2 * n - 2), s;
        for (int i = 0; i < 2 * n - 2; i++)
        {
            cin >> input[i];
            if (input[i].size() == n - 1)
                s.push_back(input[i]);
        }
        if (s[0].substr(1) != s[1].substr(0, n - 2))
            swap(s[0], s[1]);
        string ans1 = s[0] + s[1][n - 2];
        string ans2 = ans1;
        reverse(ans1.begin(), ans1.end());
        if (ans2 == ans1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}