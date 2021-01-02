#include <iostream>
using namespace std;

int main() {
	long long d[101][10];
	long long ans = 0;
	int n;

	cin >> n;
	d[1][0] = 0;
	for (int i = 1; i <= 9; i++) {
		d[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0) {
				d[i][j] += d[i - 1][j - 1];
			}
			if (j + 1 <= 9) {
				d[i][j] += d[i - 1][j + 1];
			}

			d[i][j] %= 1000000000;
		}
	}
	for (int i = 0; i <= 9; i++) {
		ans += d[n][i];
	}

	ans %= 1000000000;

	cout << ans;

	return 0;
}