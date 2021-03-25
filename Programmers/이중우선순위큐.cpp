#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2);
    priority_queue<int, vector<int>, greater<int>> min_pq;
    priority_queue<int, vector<int>, less<int>> max_pq;
    int len = operations.size(), cnt = 0;

    for (int i = 0; i < len; i++) {
        int num = stoi(operations[i].substr(2));

        if (cnt < 1) {
            while (!max_pq.empty()) max_pq.pop();
            while (!min_pq.empty()) min_pq.pop();
        }

        switch (operations[i].at(0)) {
        case 'I':
            min_pq.push(num);
            max_pq.push(num);
            cnt++;
            break;
        case 'D':
            if (cnt < 1) continue;
            if (num == 1) {
                max_pq.pop();
            }
            else {
                min_pq.pop();
            }
            cnt--;
            break;
        default:
            break;
        }
    }

    if (cnt > 1) {
        answer[0] = max_pq.top();
        answer[1] = min_pq.top();
    }

    return answer;
}

int main() {
    vector<int> results = solution({ "I 7","I 5","I -5","D -1" });

    cout << results[0] << ', ' << results[1] << '\n';

    results = solution({ "I 16","D 1" });

    cout << results[0] << ', ' << results[1] << '\n';

	return 0;
}