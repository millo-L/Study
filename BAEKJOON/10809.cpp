#include <iostream>
using namespace std;

int main() {
	int arr[26];
	string str;
	int len;

	cin >> str;
	len = str.length();

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (int i = 0; i < len; i++) {
		if (arr[str.at(i) - 'a'] != -1) continue;
		arr[str.at(i) - 'a'] = i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}