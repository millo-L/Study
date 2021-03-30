#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int len = prices.size();

    for (int i = 0; i < len - 1; i++) {
        int cnt = 1, j;
        for (j = i + 1; j < len; j++) {
            if (prices[i] > prices[j]) {
                break;
            }
            cnt++;
        }
        if (j == len) cnt--;
        answer.push_back(cnt);
    }

    answer.push_back(0);

    return answer;
}

int main() {
    vector<int> prices = { 1, 2, 3, 2, 3 };

    vector<int> results = solution(prices);
    int len = results.size();
    for (int i = 0; i < len; i++) {
        cout << results[i] << ' ';
    }

    return 0;
}