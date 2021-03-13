#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int a[30][30];
int group[30][30];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int n;
int ans[25 * 25];

void BFS(int x, int y, int cnt) {
	queue<pair<int, int>> q;

	group[x][y] = cnt;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			if (0 <= new_x && new_x < n && 0 <= new_y && new_y < n) {
				if (a[new_x][new_y] == 1 && group[new_x][new_y] == 0) {
					q.push(make_pair(new_x, new_y));
					group[new_x][new_y] = cnt;
				}
			}
		}
	}
}

void DFS(int x, int y, int cnt) {
	group[x][y] = cnt;

	for (int i = 0; i < 4; i++) {
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		if (0 <= new_x && new_x < n && 0 <= new_y && new_y < n) {
			if (a[new_x][new_y] == 1 && group[new_x][new_y] == 0) {
				DFS(new_x, new_y, cnt);
			}
		}

	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1 && group[i][j] == 0) {
				//BFS(i, j, ++cnt);
				DFS(i, j, ++cnt);
			}
		}
	}

	cout << cnt << '\n';

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans[group[i][j]]++;
		}
	}
	sort(ans + 1, ans + cnt + 1);

	for (int i = 1; i <= cnt; i++) {
		cout << ans[i] << '\n';
	}

	return 0;
}