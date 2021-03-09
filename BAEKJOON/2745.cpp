#include <iostream>
using namespace std;

int alpha_to_int(char a) {
	return a - 'A' + 10;
}

int power(int a, int times) {
	if (times == 0) return 1;
	int value = 1;

	while (times-- > 0) {
		value *= a;
	}

	return value;
}

int main() {
	string str;
	int b, len;
	long n = 0;
	cin >> str >> b;

	len = str.length();
	for (int i = 0; i < len; i++) {
		char a = str[i];

		if (a >= 'A' && a <= 'Z') {
			n += alpha_to_int(a) * power(b, len - (i + 1));
		}
		else {
			n += (a - '0') * power(b, len - (i + 1));
		}


	}

	cout << n;

	return 0;
}