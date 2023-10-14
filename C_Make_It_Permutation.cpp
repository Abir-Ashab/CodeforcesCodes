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
        int n, c, d;
        cin >> n >> c >> d;
        set<int> ds;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            ll sz = ds.size();
            ds.insert(x);
            if(ds.size() > sz) v.push_back(x);
        }
        ll result = (n - v.size()) * c;

        if (v[0] != 1)
        {
            result += d;
            v.push_back(1);
        }
        int k = v.size();
        sort(v.begin(), v.end());
        int ans = 999999999;
        for (int i = 0; i < k; i++)
        {
            if (v[i] == i + 1)
            {
                ans = min(ans, c * (k - i - 1));
            }
            else
            {
                int p = c * (k - i - 1);
                p += d * (v[i] - i - 1);
                ans = min(ans, p);
            }
        }
        result += ans;
        cout << result << endl;
    }
    return 0;
}