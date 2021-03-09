#include <iostream>
using namespace std;

long long d[3][100001];
long long a[2][100001];

long long max(long long a, long long b) {
	return a > b ? a : b;
}

int main() {
	int n, num;

	cin >> n;

	while (n > 0) {
		cin >> num;

		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= num; j++) {
				cin >> a[i][j];
			}
		}

		d[0][0] = d[1][0] = d[2][0] = 0;

		for (int i = 1; i <= num; i++) {
			d[0][i] = max(d[0][i - 1], max(d[1][i - 1], d[2][i - 1]));
			d[1][i] = max(d[0][i - 1], d[2][i - 1]) + a[0][i];
			d[2][i] = max(d[0][i - 1], d[1][i - 1]) + a[1][i];
		}

		long long ans = 0;
		for (int i = 1; i <= num; i++) {
			ans = max(max(ans, d[0][i]), max(d[1][i], d[2][i]));
		}

		cout << ans << "\n";

		n--;
	}

	return 0;
}