#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Meeting {
public:
	int begin;
	int end;
	bool operator < (const Meeting& v) const {
		if (this->end == v.end) {
			return this->begin < v.begin;
		}
		else {
			return this->end < v.end;
		}
	}
};

int main() {
	int n;

	cin >> n;

	vector<Meeting> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].begin >> a[i].end;
	}

	sort(a.begin(), a.end());
	int now = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (now <= a[i].begin) {
			now = a[i].end;
			ans++;
		}
	}

	cout << ans;

	return 0;
}