#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[8] = { 2, 1, 2, 3, 2, 4, 2, 5 };
    int c[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int sheet[3] = { 0 };

    int len = answers.size();

    for (int i = 0; i < len; i++) {
        if (a[i % 5] == answers[i]) {
            sheet[0]++;
        }

        if (b[i % 8] == answers[i]) {
            sheet[1]++;
        }

        if (c[i % 10] == answers[i]) {
            sheet[2]++;
        }
    }
    
    int max = *max_element(sheet, sheet + 3);
    for (int i = 0; i < 3; i++) {
        if (sheet[i] == max) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}

int main() {
    vector<int> result;

    result = solution({ 1, 2, 3, 4, 5 });
    int len = result.size();

    for (int i = 0; i < len; i++) {
        printf("%d ", result[i]);
    }

	return 0;
}