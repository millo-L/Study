#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> &u, pair<int, int> &v) {
	if (u.second == v.second) return u.first < v.first;
	return u.second < v.second;
}

int main() {
	vector<pair<int, int>> vec;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}

	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}

	return 0;
}