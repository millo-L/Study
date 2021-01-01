#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int len;
	
	getline(cin, str);
	len = str.length();

	for (int i = 0; i < len; i++) {
		char tmp = str.at(i);
		if (tmp >= 'a' && tmp <= 'z') {
			str.at(i) = 'a' + (tmp - 'a' + 13) % 26;
		}
		if (tmp >= 'A' && tmp <= 'Z') {
			str.at(i) = 'A' + (tmp - 'A' + 13) % 26;
		}
	}

	cout << str;
}