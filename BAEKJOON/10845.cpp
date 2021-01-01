#include <iostream>
using namespace std;

class Queue {
private:
	int frontIndex;
	int backIndex;
	int arr[10000];
public:
	Queue() {
		frontIndex = backIndex = 0;
	}

	void push(int num) {
		arr[backIndex] = num;
		backIndex = (backIndex + 1) % 10000;
	}

	int pop() {
		if (frontIndex == backIndex) return -1;
		int num = arr[frontIndex];
		frontIndex = (frontIndex + 1) % 10000;
		return num;
	}

	int size() {
		return ((10000 + backIndex) - frontIndex) % 10000;
	}

	int empty() {
		return frontIndex == backIndex;
	}

	int front() {
		if (frontIndex == backIndex) return -1;
		return arr[frontIndex];
	}

	int back() {
		if (frontIndex == backIndex) return -1;
		return arr[(10000 + backIndex - 1) % 10000];
	}

};

int main() {
	Queue queue = Queue();
	int n, num;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			queue.push(num);
		}
		else if (str == "pop") {
			cout << queue.pop() << "\n";
		}
		else if (str == "size") {
			cout << queue.size() << "\n";
		}
		else if (str == "empty") {
			cout << queue.empty() << "\n";
		}
		else if (str == "front") {
			cout << queue.front() << "\n";
		}
		else {
			cout << queue.back() << "\n";
		}
	}

	return 0;
}