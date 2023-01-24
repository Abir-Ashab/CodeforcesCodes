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
        int n; cin >> n;
 
        if(n%2 == 0){
        cout << n/2 << "\n";
        for(int i = 1; i <= 3*n/2; i+=3){
            cout << i << " " << 3*n/2+i+1 << "\n";
        }
        }
        else {
        cout << (n+1)/2 << "\n";
        for(int i = 1; i <= 3*(n+1)/2; i+=3){
            cout << i << " " << 3*(n/2)+i+1 << "\n";
        }
        }
     }
       return 0;
}