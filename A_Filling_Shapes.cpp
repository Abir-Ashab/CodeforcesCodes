#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll x;
     cin >> x;
     if(x % 2 == 0) cout << (1 << x/2);
     else cout << 0;
     return 0;
}