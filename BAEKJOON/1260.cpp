#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> a[1001];
int check[1001] = { 0 };

void DFS(int u) {
	int len = a[u].size();
	check[u] = 1;
	cout << u << ' ';
	for (int i = 0; i < len; i++) {
		int v = a[u][i];
		if (check[v] == 0) {
			DFS(v);
		}
	}
}

void BFS(int start) {
	queue<int> q;
	memset(check, 0, sizeof(check));
	check[start] = 1;
	q.push(start);

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		cout << u << ' ';
		int len = a[u].size();
		for (int i = 0; i < len; i++) {
			int v = a[u][i];
			if (check[v] == 0) {
				check[v] = 1;
				q.push(v);
			}
		}
	}
}

void resetCheck() {
	for (int i = 0; i < 1001; i++) {
		check[i] = 0;
	}
}

int main() {
	int n, m, s;

	cin >> n >> m >> s;

	for (int i = 0; i < m; i++) {
		int u, v;

		cin >> u >> v;

		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	DFS(s);
	cout << '\n';
	BFS(s);

	return 0;
}