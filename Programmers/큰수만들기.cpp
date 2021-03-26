#include <iostream>
#include <string>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    int len = number.size();
    int index = 0;

    for (int i = 0; i < len - k; i++) {
        char maxNum = number[index];
        for (int j = index; j <= i + k; j++) {
            if (maxNum < number[j]) {
                index = j;
                maxNum = number[j];
            }
        }
        index++;
        answer += maxNum;
    }

    return answer;
}

int main() {
    cout << solution("1924", 2) << '\n';
    cout << solution("1231234", 3) << '\n';
    cout << solution("4177252841", 4) << '\n';

	return 0;
}