#include <iostream>
using namespace std;

int main() {
	string str;
	int arr[26] = { 0 };
	int len;
	cin >> str;

	len = str.length();

	for (int i = 0; i < len; i++) {
		if (str.at(i) >= 'a' && str.at(i) <= 'z') {
			arr[str.at(i) - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}