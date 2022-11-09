#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		string s;
		cin >> n >> s;
		int ans = 0;
		int b = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') ++b;
			else {
				--b;
				if (b < 0) {
					b = 0;
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}