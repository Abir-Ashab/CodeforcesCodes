#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll x;
     cin >> x;
     int a[x+1];
     for(int i = 0; i < x; ++i) cin >> a[i];
     sort(a, a+x);
     bool flag = false;
     for(int i = 0; i < x - 2; ++i) {
        if(a[i] + a[i+1] > a[i+2]) flag = true;
     }
     if(flag) cout << "YES\n";
     else cout << "NO\n";
     return 0;
}