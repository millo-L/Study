#include <iostream>
#include <stack>
using namespace std;

char alpha(int a) {
	return 'A' + (a - 10);
}

int main() {
	int n, b;
	stack<char> a;

	cin >> n >> b;

	while (n > 0) {
		int r = n % b;
		if (r >= 10) a.push(alpha(r));
		else a.push('0' + r);
		n /= b;
	}

	while (!a.empty()) {
		cout << a.top();
		a.pop();
	}

	return 0;
}