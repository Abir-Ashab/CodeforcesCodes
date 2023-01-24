#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime( ll x ) {
      for ( ll i = 2; i * i <= x; ++i )
          if ( x % i == 0 ) return false;
            return true;
} 
int main() {
      ios_base::sync_with_stdio( false );
      cin.tie( NULL );
      int t;
      cin >> t;
      while (t--) {
      int d;
      cin >> d;
      ll b, c;
      b = d + 1;
      while (!isPrime(b)) b++;
      c = b + d;
      while (!isPrime(c)) c++;
 
      cout << b * c << "\n";
      }
      return 0;
}