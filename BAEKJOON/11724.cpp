#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> a[1001];
bool check[1001] = { false };

void DFS(int u) {
	check[u] = true;
	int len = a[u].size();

	for (int i = 0; i < len; i++) {
		int v = a[u][i];
		if (!check[v]) {
			DFS(v);
		}
	}
	
}

int main() {
	int n, m;
	int cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;

		cin >> u >> v;

		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			DFS(i);
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}