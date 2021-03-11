#include <iostream>
#include <map>
using namespace std;

int main() {
	map<long long, int> m;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		long long num;
		cin >> num;
		m[num]++;
	}

	long long ans = 0;
	int count = 0;

	for (map<long long, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second > count) {
			count = iter->second;
			ans = iter->first;
		}
		else if (iter->second == count && iter->first < ans) {
			ans = iter->first;
		}
	}

	cout << ans;

	return 0;
}