#include <iostream>
using namespace std;

int main() {
	int d[1001] = { 0 };
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> d[i];

		for (int j = 1; j <= i / 2; j++) {
			if (d[j] + d[i - j] > d[i]) {
				d[i] = d[j] + d[i - j];
			}
		}
	}

	cout << d[n];

	return 0;
}