#include <iostream>
using namespace std;

int num[100];

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main() {
	int t, n;
	
	cin >> t;

	while (t-- > 0) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}

		long long sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(num[i], num[j]);
			}
		}

		cout << sum << '\n';
	}


	return 0;
}