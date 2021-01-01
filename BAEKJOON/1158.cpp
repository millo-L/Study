#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	queue<int> que;
	queue<int> order;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		que.push(i);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < k; j++) {
			int tmp = que.front();
			que.pop();
			que.push(tmp);
		}
		order.push(que.front());
		que.pop();
	}

	cout << "<";
	for (int i = 0; i < n; i++) {
		i == n - 1 ? cout << order.front() : cout << order.front() << ", ";
		order.pop();
	}
	cout << ">";

	return 0;
}