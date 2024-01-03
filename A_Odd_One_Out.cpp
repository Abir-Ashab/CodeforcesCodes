#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        ll x, y, z; cin >> x >> y >> z;
        map<int,int>mp;
        mp[x]++;
        mp[y]++;
        mp[z]++;
        for( auto val : mp) {
           if(val.second == 1) cout << val.first << '\n';
        } 
    }
    return 0;
}