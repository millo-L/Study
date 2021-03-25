#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> periods;
    int len = progresses.size();

    for (int i = 0; i < len; i++) {
        int period = (100 - progresses[i]) / speeds[i];
        if ((100 - progresses[i]) % speeds[i] != 0) period++;
        periods.push(period);
    }

    while (!periods.empty()) {
        int cnt = 1;
        int period = periods.front();
        periods.pop();

        while (!periods.empty()) {
            if (period < periods.front()) {
                break;
            }
            cnt++;
            periods.pop();
        }

        answer.push_back(cnt);
    }

    return answer;
}

int main() {
    vector<int> progresses = { 95, 90, 99, 99, 80, 99 };
    vector<int> speeds = { 1, 1, 1, 1, 1, 1 };
    vector<int> results;

    results = solution(progresses, speeds);
    int len = results.size();

    for (int i = 0; i < len; i++) {
        cout << results[i] << ' ';
    }

    cout << '\n';

    results = solution({93, 30, 55}, { 1, 30, 5 });
    len = results.size();

    for (int i = 0; i < len; i++) {
        cout << results[i] << ' ';
    }

	return 0;
}