#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int w, h;
int a[50][50];
int group[50][50];

void DFS(int x, int y, int cnt) {
	group[x][y] = cnt;

	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			int new_x = x + dx;
			int new_y = y + dy;
			if (0 <= new_x && new_x < h && 0 <= new_y && new_y < w) {
				if (a[new_x][new_y] == 1 && group[new_x][new_y] == 0) {
					DFS(new_x, new_y, cnt);
				}
			}
		}
	}
}

void BFS(int x, int y, int cnt) {
	group[x][y] = cnt; 
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int dx = -1; dx <= 1; dx++) {
			for (int dy = -1; dy <= 1; dy++) {
				int new_x = x + dx;
				int new_y = y + dy;
				if (0 <= new_x && new_x < h && 0 <= new_y && new_y < w) {
					if (a[new_x][new_y] == 1 && group[new_x][new_y] == 0) {
						group[new_x][new_y] = cnt;
						q.push(make_pair(new_x, new_y));
					}
				}
			}
		}
	}

}

int main() {

	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		memset(group, 0, sizeof(group));

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
			}
		}

		int cnt = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (a[i][j] == 1 && group[i][j] == 0) {
					//DFS(i, j, ++cnt);
					BFS(i, j, ++cnt);
				}
			}
		}

		cout << cnt << '\n';
	}


	return 0;
}