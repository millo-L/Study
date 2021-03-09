#include <iostream>
using namespace std;

int a[1001] = { 0 };
int d[1001] = { 0 };

int main() {
	int n; 
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		d[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[j] > a[i] && d[j] + 1 > d[i]) {
				d[i] = d[j] + 1;
			}
		}
	}

	int max = d[1];

	for (int i = 2; i <= n; i++) {
		if (d[i] > max) max = d[i];
	}

	cout << max;

	return 0;
}