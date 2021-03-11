#include <iostream>
using namespace std;

void convert(int num, int base) {
	if (num == 0) return;
	convert(num / base, base);
	printf("%d ", num % base);
}

int main() {
	int a, b;
	int n;
	int ans = 0;

	cin >> a >> b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		ans = ans * a + num;
	}

	convert(ans, b);

	return 0;
}