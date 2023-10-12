#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int first, second;
        cin >> first >> second;
        int ans = 0;
        int RealAns = first;
        while (first <= second)
        {
            string s = to_string(first),s2 = to_string(second);
            int k = s2[s2.size() - 1] - '0';
            vector<int> v;
            for (int i = 0; i < s.size(); ++i) v.push_back(s[i] - '0');
            sort(v.begin(), v.end());
            int m = v[v.size() - 1];
            int n = v[0];
            int cnt = m - n;
            if (cnt >= ans)
            {
                ans = cnt;
                RealAns = first;
            }
            first++;
            if (ans >= 9) break;
        }
        cout << RealAns << '\n';
    }

    return 0;
}