#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
int length[100][100];

void BFS(int x, int y) {
	queue<pair<int, int>> q;
	length[x][y] = 1;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			if (0 <= new_x && new_x < n && 0 <= new_y && new_y < m) {
				if (a[new_x][new_y] == 1 && length[new_x][new_y] == 0) {
					q.push(make_pair(new_x, new_y));
					length[new_x][new_y] = length[x][y] + 1;
				}
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	memset(length, 0, sizeof(length));

	BFS(0, 0);

	cout << length[n - 1][m - 1];

	return 0;
}