#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Stack {

private:
    int topIndex;
    int arr[10000];

public:

    Stack() {
        topIndex = 0;
    }

    void push(int num) {
        arr[topIndex++] = num;
    }

    int pop() {
        if (topIndex == 0) return -1;
        return arr[--topIndex];
    }

    int isEmpty() {
        if (topIndex == 0) return true;
        return false;
    }

    int size() {
        return topIndex;
    }

    int top() {
        if (topIndex == 0) return -1;
        return arr[topIndex - 1];
    }
};

int main() {
    Stack stack = Stack();
    int n, num;
    string order;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> order;

        if (order == "push") {
            cin >> num;
            stack.push(num);
            continue;
        }
        else if (order == "top") {
            cout << stack.top();
        }
        else if (order == "size") {
            cout << stack.size();
        }
        else if (order == "empty") {
            cout << stack.isEmpty();
        }
        else {
            cout << stack.pop();
        }

        cout << "\n";
    }


    return 0;
}