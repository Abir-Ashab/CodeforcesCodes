#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = -1; i <= 7; ++i) {
            for(int j = -1; j <= 7; ++j) { 
                      for(int k = -1; k <= 7; ++k) {
                          for(int l = -1; l <= 7; ++l) { 
                                    for(int m = -1; m <= 7; ++m) {
                                       for(int o = -1; o <= 7; ++o) { 
                                            for(int p = -1; p <= 7; ++p) {
                                         if(i + j + k + l + m + o + p == i + j and i + j == j + k and j + k == k + l and k + l == l + m and l + m == m + 0 and m + o == o == p) 
                                            cout << i << " " << j << "  " << k << "  " << l << "  " << m << ' ' << o << ' ' << p << '\n';
                                            }
                                       }
                                    }
                          }
                      }
            }
        }
    return 0;
}
