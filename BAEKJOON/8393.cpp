#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	cout << sum;

	return 0;
}