#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int max = brown + yellow;
    for (int i = max / 3; i >= 3; i--) {
        if (max % i != 0) continue;

        if ((i - 2) * (max / i - 2) == yellow) {
            answer.push_back(i);
            answer.push_back(max / i);

            break;
        }
    }

    return answer;
}

int main() {
    vector<int> result;

    result = solution(10, 2);

    for (int i = 0; i < 2; i++) {
        printf("%d ", result[i]);
    }

    cout << '\n';

    result = solution(8, 1);

    for (int i = 0; i < 2; i++) {
        printf("%d ", result[i]);
    }

    cout << '\n';

    result = solution(24, 24);

    for (int i = 0; i < 2; i++) {
        printf("%d ", result[i]);
    }

    cout << '\n';

    return 0;
}