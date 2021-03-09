#include <iostream>
using namespace std;

int main() {
	int p[10001], n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i / 2; j++) {
			if (p[i] < p[j] + p[i - j]) {
				p[i] = p[j] + p[i - j];
			}
		}
	}

	cout << p[n];

	return 0;
}