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
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            int a;
            cin >> a;
            sum += a;
        }
        if(sum > 0) cout << "YES\n";
        else cout << "NO\n";
       }
       return 0;
}