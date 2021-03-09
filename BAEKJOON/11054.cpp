#include <iostream>
using namespace std;

int a[1001] = { 0 };
int d[1001] = { 0 };
int d2[1001] = { 0 };

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		d[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j] && d[j] + 1 > d[i]) {
				d[i] = d[j] + 1;
			}
		}
	}

	for (int i = n; i >= 1; i--) {
		d2[i] = 1;
		for (int j = i + 1; j <= n; j++) {
			if (a[i] > a[j] && d2[j] + 1 > d2[i]) {
				d2[i] = d2[j] + 1;
			}
		}
	}

	int max = d[1] + d2[1] - 1;

	for (int i = 2; i <= n; i++) {
		if (d[i] + d2[i] - 1 > max) 
			max = d[i] + d2[i] - 1;
	}
	cout << max;
		 
	return 0;
}