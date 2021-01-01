#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<char> leftStack, rightStack;
	int n; 
	char cmd;
	char tmp;
	string str;

	cin >> str;
	n = str.length();

	for (int i = 0; i < n; i++) {
		leftStack.push(str.at(i));
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == 'L') {
			if (leftStack.empty()) continue;
			rightStack.push(leftStack.top());
			leftStack.pop();
		}
		else if (cmd == 'D') {
			if (rightStack.empty()) continue;
			leftStack.push(rightStack.top());
			rightStack.pop();
		}
		else if (cmd == 'B') {
			if (leftStack.empty()) continue;
			leftStack.pop();
		}
		else {
			cin >> tmp;
			leftStack.push(tmp);
		}
	}

	while (!leftStack.empty()) {
		rightStack.push(leftStack.top());
		leftStack.pop();
	}

	while (!rightStack.empty()) {
		cout << rightStack.top();
		rightStack.pop();
	}
}