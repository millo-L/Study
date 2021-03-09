#include <iostream>
using namespace std;

int num[100001];
int d[100001];

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}

	d[1] = num[1];
	for (int i = 2; i <= n; i++) {
		d[i] = num[i];
		if (d[i] + d[i - 1] > d[i])
			d[i] = d[i] + d[i - 1];
	}

	int max = d[1];
	for (int i = 2; i <= n; i++) {
		if (d[i] > max) 
			max = d[i];
	}

	cout << max;

	return 0;
}