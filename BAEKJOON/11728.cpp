#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	
	cin >> n >> m; 
	
	vector<int> a(n), b(m), c(n + m);


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i = 0, j = 0, index = 0;
	while (i < n && j < m) {
		if (a[i] > b[j]) {
			c[index++] = b[j++];
		}
		else {
			c[index++] = a[i++];
		}
	}

	while (i < n) {
		c[index++] = a[i++];
	}

	while (j < m) {
		c[index++] = b[j++];
	}

	for (i = 0; i < n + m; i++) {
		cout << c[i] << ' ';
	}

	return 0;
}