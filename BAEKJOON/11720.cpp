#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%1d", &num);
		sum += num;
	}

	cout << sum;

	return 0;
}