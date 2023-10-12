#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x, y; cin >> x >> y;
    ll sum = x + y;
    vector < ll > v1, v2, v3;
    string s1 = to_string(x), s2 = to_string(y), ss = to_string(sum);
    for(int i = 0; i < s1.size(); ++i) {
        if(s1[i] != '0') v1.push_back(s1[i] - '0');
    }
    for(int i = 0; i < s2.size(); ++i) {
        if(s2[i] != '0') v2.push_back(s2[i] - '0');
    }
    for(int i = 0; i < ss.size(); ++i) {
        if(ss[i] != '0') v3.push_back(ss[i] - '0');
    }
    ll num1 = v1[0], num2 = v2[0], num3 = v3[0];
    for(int i = 1, j = 10; i < v1.size(); ++i) {
        num1 = num1*j + v1[i];
    }
    for(int i = 1, j = 10; i < v2.size(); ++i) {
        num2 = num2*j + v2[i];
    }
    for(int i = 1, j = 10; i < v3.size(); ++i) {
        num3 = num3*j + v3[i];
    }
    if(num1 + num2 == num3) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}