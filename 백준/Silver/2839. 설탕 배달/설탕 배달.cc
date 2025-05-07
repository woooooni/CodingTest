#include <iostream>
using namespace std;


int d[5001];

int dp(int x) {
	if (x < 0) return 99998;
	if (x == 3 || x == 5) return 1;
	

	if (d[x] != 0) return d[x];
	return d[x] = min(dp(x - 3) + 1, dp(x - 5) + 1);
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	d[3] = 1;
	d[5] = 1;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		dp(n);
	}
	if (d[n] >= 6000) cout << "-1";
	else cout << d[n];
}