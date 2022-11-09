#include <bits/stdc++.h>
using namespace std;

int main() {
const int N = 110;
int t[N];
int n, total;
int dp[100010];
  cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> t[i];
		total += t[i];
	}
 
	int lo = 1, hi = 100000;
	while(lo < hi) {
		int mid = (lo + hi) / 2;
 
		for(int i = 1; i <= 100000; i++) {
			dp[i] = 0;
		}
		for(int i = 1; i <= n; i++) {
			for(int j = mid; j >= t[i]; j--) {
				ckmax(dp[j], dp[j - t[i]] + t[i]);
			}
		}
		int res = total - dp[mid];
		if(res <= mid) {
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}
 
	cout << lo << "\n";
}