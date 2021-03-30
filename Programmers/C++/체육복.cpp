#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> clothes(n, 1);
    int len = reserve.size();
    for (int i = 0; i < len; i++) {
        clothes[reserve[i] - 1]++;
    }

    len = lost.size();
    for (int i = 0; i < len; i++) {
        clothes[lost[i] - 1]--;
    }

    for (int i = 0; i < n; i++) {
        if (0 < i && clothes[i] == 0 && clothes[i - 1] == 2) {
            clothes[i]++;
            clothes[i - 1]--;
        }
        if (i < n - 1 && clothes[i] == 0 && clothes[i + 1] == 2) {
            clothes[i]++;
            clothes[i + 1]--;
        }
    }

    for (int i = 0; i < n; i++) {
        if (clothes[i] > 0) answer++;
    }

    return answer;
}

int main() {
    cout << solution(5, { 2, 4 }, { 1, 3, 5 }) << '\n';
    cout << solution(5, { 2, 4 }, { 3 }) << '\n';
    cout << solution(3, { 3 }, { 1 }) << '\n';

	return 0;
}