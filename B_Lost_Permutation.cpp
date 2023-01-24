#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, x;
       cin >> test;
       ll cnt = 0;
       while(test--) {
        ll y;
        cin >> x >> y; int a[x+2];
        a[0] = 0;
        for(int i = 1; i <= x; ++i) cin >> a[i];
        sort(a, a+x+1);
        int s = a[x];
        vector < ll > v;
        int j = 1;
        for(int i = 1; i <= x; ++i) {
            if(a[i] != j) {
               v.push_back(0);
               i--;
            } else {
               v.push_back(a[i]);
            }
            j++;
        }
        for(int i = 0; i < s; ++i){
         if(v[i] == 0) {
            y -= (i+1);
         }
        }
        bool flag = true;
        for(int i = s+1; i >= 0; ++i){
         if(y - i >= 0) {
         v.push_back(i);
         y -= i;
         }
         else if(y == 0)break;
         else {
            flag = false;
            break;
         }
        }
        v.clear();
        if(flag) cout << "YES\n";
        else cout << "NO\n";
       }
       return 0;
}