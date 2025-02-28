#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, k;

	cin >> n >> m >> k;
	vector<int> a(n);

	if (m + k - 1 <= n && n <= m * k) {
		for (int i = 0; i < n; i++) {
			a[i] = i + 1;
		}
		vector<int> g;
		g.push_back(0);
		g.push_back(k);
		n -= k;
		m -= 1;
		int gs = m == 0 ? 1 : n / m;
		int r = m == 0 ? 0 : n % m;
		for (int i = 0; i < m; i++) {
			g.push_back(g.back() + gs + (r > 0 ? 1 : 0));
			if (r > 0) {
				r -= 1;
			}
		}
		int len = g.size();
		for (int i = 0; i < len - 1; i++) {
			reverse(a.begin() + g[i], a.begin() + g[i + 1]);
		}
		len = a.size();
		for (int i = 0; i < len; i++) {
			cout << a[i] << ' ';
		}
	}
	else {
		cout << "-1";
	}


	return 0;
}