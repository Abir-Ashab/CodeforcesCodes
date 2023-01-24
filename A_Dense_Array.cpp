#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, n;
       cin >> test;
       ll cnt = 0;
       while(test--) {
             cin >> n;
             int arr[n+1];
		     for(int i = 0; i < n; ++i) cin >> arr[i];
		     int ans = 0;
		     for (int i = 1; i < n; i++) {
			 int c = min(arr[i-1], arr[i]);
			 while (c * 2 < max(arr[i-1], arr[i])) {
				c *= 2; ans++;
			 }	
	   }	 
	   cout << ans << endl;
       }
       return 0;
}