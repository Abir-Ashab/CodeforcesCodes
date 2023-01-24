#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 9;
int spf[N];
int div(int n) {
  for(int i = 2; i <= n; ++i){
    if(n % i == 0) return i;
  }
}
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll x, y;
     cin >> x >> y;
     bool flag = true;
     vector<int> ans;
     if(y % x != 0 or (x == 1 and y % 3 !=0 and y % 2 !=0 and y != 1)) flag = false;
     else {
        int n = y/x;
        while (n > 1) {
        ll store = div(n);
        ans.push_back(store);
        n /= store;
        }
        for(int i = 0; i < ans.size(); ++i){
          if(ans[i] != 2 and ans[i] != 3)
             flag = false;
        }
    }
    if(flag) cout << ans.size();
    else cout << -1;
    return 0;
}