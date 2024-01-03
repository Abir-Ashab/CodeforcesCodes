#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);

    int ptr = 0;
    ll tot = a[0].first;
    for (int i = 0; i < n; i++) {
      while (ptr < i) {
        ptr++;
        tot += a[ptr].first;
      }
      while (ptr + 1 < n && tot >= a[ptr + 1].first) {
        ptr++;
        tot += a[ptr].first;
      }
      ans[a[i].second] = ptr;
    }
    for (int i : ans)
      cout << i << " ";
    cout << "\n";
  }
  
}