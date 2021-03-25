#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool cmp(int u, int v) {
    return u > v;
}

int solution(vector<int> priorities, int location) {
    int answer = 0, i;
    queue<pair<int, int>> q;
    int len = priorities.size();
    for (i = 0; i < len; i++) {
        q.push(make_pair(i, priorities[i]));
    }

    sort(priorities.begin(), priorities.end(), cmp);

    i = 0;
    while (!q.empty()) {
        int index = q.front().first;
        int priority = q.front().second;
        q.pop();

        if (priority == priorities[i]) {
            i++;
            if (index == location) {
                answer = i;
                break;
            }
        }
        else {
            q.push(make_pair(index, priority));
        }
    }

    return answer;
}

int main() {
    vector<int> priorities = { 2, 1, 3, 2 };
    int location = 2;

    cout << solution(priorities, location);

	return 0;
}