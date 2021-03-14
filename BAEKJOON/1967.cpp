#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

struct Edge {
	int to;
	int cost;
	Edge(int to, int cost) : to(to), cost(cost) {

	}
};

const int MAX = 100001;
vector<Edge> a[MAX];
int d[MAX];
bool check[MAX];

void BFS(int start) {
	memset(check, false, sizeof(check));
	memset(d, 0, sizeof(d));
	queue<int> q;
	check[start] = true;
	q.push(start);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		int len = a[x].size();
		for (int i = 0; i < len; i++) {
			Edge& e = a[x][i];
			if (!check[e.to]) {
				d[e.to] = d[x] + e.cost;
				q.push(e.to);
				check[e.to] = true;
			}
		}
	}
}

int main() {
	int v;

	cin >> v;

	for (int i = 1; i < v; i++) {
		int u, to, cost;
		cin >> u >> to >> cost;
		a[u].push_back(Edge(to, cost));
		a[to].push_back(Edge(u, cost));
	}

	BFS(1);
	int start = 1;
	for (int i = 2; i <= v; i++) {
		if (d[i] > d[start]) {
			start = i;
		}
	}

	BFS(start);
	int ans = d[1];
	for (int i = 2; i <= v; i++) {
		if (ans < d[i]) {
			ans = d[i];
		}
	}
	cout << ans;

	return 0;
}