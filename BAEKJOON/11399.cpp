#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int p[1000];
	int sum = 0;
	int sub = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p + n);

	for (int i = 0; i < n; i++) {
		sub += p[i];
		sum += sub;
	}

	cout << sum;

	return 0;
}