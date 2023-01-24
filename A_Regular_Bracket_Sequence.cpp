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
            string s;
            cin >> s;
            vector < char > v;
            for(int i = 0; i < s.size(); ++i) {
                if(s[i] == ')'){
                    if(v.size() == 0) {
                        v.push_back(s[i]);
                        break;
                    }
                    v.pop_back();
                }
                else if(s[i] == '(') {
                    v.push_back(s[i]);
                }
                else {
                    if(v.size() != 0) v.pop_back();
                    else v.push_back('(');
                }
            }
            if(v.size() == 0) cout << "YES\n";
            else cout << "NO\n";
       }
       return 0;
}