#include <iostream>
using namespace std;

int main() {
	int n, k;
	int a[10];
	int cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		cnt += k / a[i];
		k %= a[i];
	}

	cout << cnt;

	return 0;
}