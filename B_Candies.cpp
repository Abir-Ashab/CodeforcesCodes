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
        int n; cin >> n;

         if (n % 2 == 0) cout << -1 << '\n';
         else {
             int mx = 40;
             vector<int> ans;
             while (n > 1 and mx) {
                if (((n + 1) / 2) % 2 != 0) {
                     n = (n + 1) / 2;
                     ans.push_back(1);      
                } else {
                     n = (n - 1) / 2;
                     ans.push_back(2);      
                }
                mx--;
             }
             if (n == 1) {
                 cout << ans.size() << '\n';
                 ll sz = ans.size() - 1;
                 for(int i = sz; i >= 0; --i) cout << ans[i] << ' ';
                 cout << '\n';
             }
             else cout << -1 << '\n';
        }
    }
    return 0;
}