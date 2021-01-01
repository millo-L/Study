#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	while (getline(cin, str)) {
		int len = str.length();
		int lower = 0;
		int upper = 0;
		int number = 0;
		int blank = 0;
		for (int i = 0; i < len; i++) {
			if (str.at(i) >= 'a' && str.at(i) <= 'z') {
				lower++;
			}
			else if (str.at(i) >= 'A' && str.at(i) <= 'Z') {
				upper++;
			}
			else if (str.at(i) >= '0' && str.at(i) <= '9') {
				number++;
			}
			else if (str.at(i) == ' ') {
				blank++;
			}
		}
		printf("%d %d %d %d\n", lower, upper, number, blank);
	}

	return 0;
}