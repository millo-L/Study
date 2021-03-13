#include <iostream>
#include <vector>
using namespace std;

int check[1000000] = { 0 };

int myPow(int x, int p) {
	int value = 1;
	for (int i = 0; i < p; i++) {
		value *= x;
	}

	return value;
}

int next(int a, int p) {
	int ans = 0;

	while (a > 0) {
		ans += myPow(a % 10, p);
		a /= 10;
	}

	return ans;
}

int length(int a, int p, int cnt) {
	if (check[a] != 0) return check[a] - 1;
	check[a] = cnt;
	int b = next(a, p);
	return length(b, p, cnt + 1);
}

int main() {
	int a, p;

	cin >> a >> p;

	cout << length(a, p, 1);

	return 0;
}