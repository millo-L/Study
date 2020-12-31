#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int max, min;
	int num, n;

	cin >> n;
	cin >> num;
	max = min = num;

	for (int i = 1; i < n; i++) {
		cin >> num;
		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}

	printf("%d %d\n", min, max);

	return 0;
}