#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int ans = 0;
	string str;
	int len;

	cin >> str;

	len = str.length();

	for (int i = 0; i < len; i++) {
		if (str.at(i) == '(') {
			s.push(i);
		}
		else {
			if (s.top() + 1 == i) {
				s.pop();
				ans += s.size();
			}
			else {
				s.pop();
				ans += 1;
			}
		}
	}

	cout << ans;



	return 0;
}