#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n;
	deque<int> deq;
	string str;
	int num;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push_front") {
			cin >> num;
			deq.push_front(num);
		}
		else if (str == "push_back") {
			cin >> num;
			deq.push_back(num);
		}
		else if (str == "pop_front") {
			if (deq.empty()) {
				cout << "-1\n";
				continue;
			}
			cout << deq.front() << "\n";
			deq.pop_front();
		}
		else if (str == "pop_back") {
			if (deq.empty()) {
				cout << "-1\n";
				continue;
			}
			cout << deq.back() << "\n";
			deq.pop_back();
		}
		else if (str == "size") {
			cout << deq.size() << "\n";
		}
		else if (str == "empty") {
			cout << (int)deq.empty() << "\n";
		}
		else if (str == "front") {
			if (deq.empty()) {
				cout << "-1\n";
				continue;
			}
			cout << deq.front() << "\n";
		}
		else {
			if (deq.empty()) {
				cout << "-1\n";
				continue;
			}
			cout << deq.back() << "\n";
		}
	}

	return 0;
}