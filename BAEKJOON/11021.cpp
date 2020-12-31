#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		printf("Case #%d: %d\n", i, a + b);
	}

	return 0;
}