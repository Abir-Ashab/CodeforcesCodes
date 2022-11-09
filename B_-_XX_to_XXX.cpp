#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s, t;
    cin >> s >> t;
    int m = 0, n = 0;
    while (m < s.size() || n < t.size()) {
    
        if (n >= t.size()) {
    
            cout<<"No";
        }
        if (m< s.size() && s[m] == t[n]) {
    
            m++, n++;
        }
        else {
    
            if (m - 2 >= 0 && s[m - 1] == t[n] && s[m - 2] == t[n]) {
    
                n++;
            }
            else {
    
                cout<<"No";
            }
        }
    }
    if (n== t.size()) {
    
       cout<<"Yes";
    }
    else {
    
       cout<<"No";
    }
    return 0;
}