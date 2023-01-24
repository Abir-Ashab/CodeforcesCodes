#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n;
     cin >> n;
	 for(int i = 0; i <= n; i++) {
		int z = n-i;
		while(z--) cout << "  ";

		for(int j = 0; j <= i - 1; j++) cout << j << ' ';
		cout << i;
		if(i > 0) cout << ' ';	

		for(int j = i - 1; j >= 1; j--) cout << j << ' ';
		if(i > 0) cout << 0;	
		cout << '\n';	
	 }
	 for(int i = n - 1; i >= 0; i--) {
		int z = n-i;
		while(z--) cout << "  ";

		for(int j = 0; j <= i - 1; j++) cout << j << ' ';
		cout << i;
		if(i > 0) cout << ' ';	

		for(int j = i - 1; j >= 1; j--) cout << j << ' ';
		if(i > 0) cout << 0;	
		cout << '\n';	
	 }
}