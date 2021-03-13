#include <iostream>
#include <vector>
using namespace std;

int a[1001];
bool check[1001] = { false };

void DFS(int u) {
	if (check[u]) return;
	check[u] = true;
	DFS(a[u]);
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;

		for (int j = 1; j <= m; j++) {
			cin >> a[j];
			check[j] = false;
		}

		int cnt = 0;
		for (int j = 1; j <= m; j++) {
			if (!check[j]) {
				DFS(j);
				cnt++;
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}