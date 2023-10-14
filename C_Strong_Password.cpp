#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;   
        int m; cin >> m;  
        string l, r; cin >> l >> r;    
        int p = 0, f = 0;
        for (int i = 0; i < m; i++) {
            int q = p;
            for (char x = l[i]; x <= r[i]; x++) {
                if (s.find(x, p) == -1) {
                    cout << "YES\n";
                    f = 1; break;
                }
                q = max(q, int(s.find(x, p)) + 1);
            }
            p = q;
            if(f) break;
        }
        
        if(!f) cout << "NO\n";
    }
    return 0;
}