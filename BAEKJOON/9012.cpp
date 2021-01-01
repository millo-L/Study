#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<char> s;
	string str;
	int n;
	int len;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int j;
		cin >> str;
		len = str.length();
		for (j = 0; j < len; j++) {
			if (str.at(j) == '(') {
				s.push(str[j]);
			}
			else {
				if (s.empty()) {
					break;
				}
				s.pop();
			}

		}
		if(j == len && s.empty()) {
		cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

		len = s.size();
		for (j = 0; j < len; j++) {
			s.pop();
		}
	}
}