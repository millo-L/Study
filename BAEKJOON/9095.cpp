#include <iostream>
using namespace std;

int main() {
	int d[11] = { 0 };
	int n, num;

	cin >> n;

	d[0] = 1;
	for (int i = 1; i <= 10; i++) {
		if (i - 1 >= 0) {
			d[i] += d[i - 1];
		}
		if (i - 2 >= 0) {
			d[i] += d[i - 2];
		}
		if (i - 3 >= 0) {
			d[i] += d[i - 3];
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> num;
		cout << d[num] << "\n";
	}

	return 0;
}