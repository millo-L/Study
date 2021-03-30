#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq (scoville.begin(), scoville.end());

    while (pq.top() < K) {
        if (pq.size() == 1) return -1;
        int one, two;

        one = pq.top();
        pq.pop();
        two = pq.top();
        pq.pop();
        pq.push(one + two * 2);

        answer++;
    }

    return answer;
}

int main() {
    vector<int> scoville = { 1, 2, 3, 9, 10, 12 };
    int K = 7;

    cout << solution(scoville, K);

	return 0;
}