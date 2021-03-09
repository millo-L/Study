#include <iostream>
#include <algorithm>
using namespace std;

string to_binary(int a, bool isFirst) {
	string bin = "", before = "";

	if (!isFirst) {
		if (a == 0) before += "0";
		if (a < 2) before += "0";
		if (a < 4) before += "0";
	}

	while (a > 0) {
		bin += ('0' + (a % 2));
		a /= 2;
	}

	reverse(bin.begin(), bin.end());


	return before + bin;
}

int main() {
	string str, bin = "";
	int len;

	cin >> str;

	len = str.length();

	if (len == 1 && str[0] == '0') {
		cout << '0';
		return 0;
	}

	for (int i = 0; i < len; i++) {
		bin += to_binary(str[i] - '0', i == 0);
	}

	cout << bin;

	return 0;
}