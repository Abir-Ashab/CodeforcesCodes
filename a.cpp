#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test;
    while(test--) {
        string s; cin >> s;
        bool flag = true;
        for(ll i = 1; i < s.size();i++){
            string s1 =s.substr(0,i);
            string s2 =s.substr(i, s.size());
            int a,b; 
            a = stoi(s1);
            b = stoi(s2); 
            if(s1[0] != '0' and s2[0] != '0' and b > a){
                flag = false;
                cout << s1 << " " << s2 << endl;
                break;
            }
            else if(a == b or a > b){ 
                cout << -1 << endl;
                break;
            }
        }
    }
    return 0;
}
