#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> num;
	vector<int> sign;
	bool minus = false;
	int cur = 0;

	sign.push_back(1);
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == '+' || s[i] == '-') {
			if (s[i] == '+') {
				sign.push_back(1);
			}
			else {
				sign.push_back(-1);
			}
			num.push_back(cur);
			cur = 0;
		}
		else {
			cur = cur * 10 + (s[i] - '0');
		}
	}
	num.push_back(cur);
	int ans = 0;
	minus = false;
	len = num.size();
	for (int i = 0; i < len; i++) {
		if (sign[i] == -1) {
			minus = true;
		}
		if (minus) {
			ans -= num[i];
		}
		else {
			ans += num[i];
		}
	}

	cout << ans;

	return 0;
}