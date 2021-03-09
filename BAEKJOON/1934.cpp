#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int n;
	int a, b;
	cin >> n;

	while (n--) {
		cin >> a >> b;
		cout << lcm(a, b) << '\n';
	}

	return 0;
}