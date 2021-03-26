#include <iostream>
#include <string>
using namespace std;

int solution(string name) {
    int answer = 0, index = 0;
    int len = name.size();
    string str(len, 'A');

    while (str != name) {
        int next = 0, left = 0, right= 0;

        for (int i = 0; i < len; i++) {
            right = (index + i) % len;
            left = (index - i + len) % len;

            if (str[right] != name[right]) next = right;
            else if (str[left] != name[left]) next = left;
            else continue;

            answer += i + min(name[next] - 'A', 'Z' - name[next] + 1);
            str[next] = name[next];
            break;
        }
        index = next;
    }

    return answer;
}

int main() {
    cout << solution("JEROEN") << '\n';
    cout << solution("JAN") << '\n';

	return 0;
}