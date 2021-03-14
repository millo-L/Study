#include <iostream>
#include <queue>
using namespace std;

int n;
int a[100][100];
int group[100][100];
int dist[100][100];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

void divideLand(int x, int y, int cnt) {
	group[x][y] = cnt;
	queue<pair<int, int>> q;
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
					group[new_x][new_y] = cnt;
					q.push(make_pair(new_x, new_y));
				}
			}
		}
	}

}

int main() {
	cin >> n;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1 && group[i][j] == 0) {
				divideLand(i, j, ++cnt);
			}
		}
	}

	int ans = -1;
	for (int g = 1; g <= cnt; g++) {
		queue<pair<int, int>> q;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				dist[i][j] = -1;
				if (group[i][j] == g) {
					q.push(make_pair(i, j));
					dist[i][j] = 0;
				}
			}
		}

		while (!q.empty()) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++) {
				int new_x = x + dx[i];
				int new_y = y + dy[i];
				if (0 <= new_x && new_x < n && 0 <= new_y && new_y < n) {
					if (dist[new_x][new_y] == -1) {
						dist[new_x][new_y] = dist[x][y] + 1;
						q.push(make_pair(new_x, new_y));
					}
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == 1 && group[i][j] != g) {
					if (ans == -1 || dist[i][j] - 1 < ans) {
						ans = dist[i][j] - 1;
					}
				}
			}
		}
	}	

	cout << ans;

	return 0;
}