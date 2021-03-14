#include <iostream>
#include <queue>
using namespace std;

int a[1000][1000];
int days[1000][1000];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
int n;
int m;

void BFS(queue<pair<int, int>> q) {

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			if (0 <= new_x && new_x < n && 0 <= new_y && new_y < m) {
				if (a[new_x][new_y] == 0 && days[new_x][new_y] == -1) {
					days[new_x][new_y] = days[x][y] + 1;
					q.push(make_pair(new_x, new_y));
				}
			}
		}
	}
}

int main() {
	cin >> m >> n;
	queue<pair<int, int>> start;
	int max = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			days[i][j] = -1;
			if (a[i][j] == 1) {
				days[i][j] = 0;
				start.push(make_pair(i, j));
			}
		}
	}

	BFS(start);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (days[i][j] == -1 && a[i][j] == 0) {
				max = -1;
				break;
			}
			if (days[i][j] > max)
				max = days[i][j];
		}

		if (max == -1) break;
	}

	cout << max;

	return 0;
}