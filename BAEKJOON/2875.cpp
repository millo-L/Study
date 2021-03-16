#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	int ans = 0;

	cin >> m >> n >> k;

	while (m >= 2 && n >= 1 && m + n >= k + 3) {
		ans++;
		m -= 2;
		n -= 1;
	}
	cout << ans;

	return 0;
}