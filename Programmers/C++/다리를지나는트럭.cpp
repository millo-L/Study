#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
    int len = truck_weights.size();
    int i = 0, sum = 0;

    while (i < len) {
        if (q.size() >= bridge_length) {
            sum -= q.front();
            q.pop();
        }
        if (sum + truck_weights[i] <= weight) {
            q.push(truck_weights[i]);
            sum += truck_weights[i++];
        }
        else {
            q.push(0);
        }
        answer++;
    }

    answer += bridge_length;

    return answer;
}

int main() {
    int bridge_length = 2, weight = 10;
    vector<int> truck_weights = { 7, 4, 5, 6 };

    cout << solution(bridge_length, weight, truck_weights);

	return 0;
}