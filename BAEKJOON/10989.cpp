#include <iostream>
#include <algorithm>
using namespace std;

int num_count[10001] = { 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		num_count[num]++;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < num_count[i]; j++) {
			cout << i << '\n';
		}
	}

	return 0;
}