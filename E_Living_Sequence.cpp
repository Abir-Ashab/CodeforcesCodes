#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void count(ll n) {
    vector<int> ans;
    while(n > 0) {
        if(n % 9 >= 4) ans.push_back(n % 9 + 1);
        else ans.push_back(n % 9);
        n /= 9;
    }
    reverse(ans.begin(),ans.end());
    for(auto val : ans) cout << val ; 
} 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x; cin >> x;
        count(x);
        cout << '\n';
    }
    return 0;
}