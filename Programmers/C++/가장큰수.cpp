#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(string u, string v) {
    return u + v > v + u;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str;
    int len = numbers.size();

    for (int i = 0; i < len; i++) {
        str.push_back(to_string(numbers[i]));
    }

    sort(str.begin(), str.end(), cmp);

    for (int i = 0; i < len; i++) {
        answer += str[i];
    }

    if (answer[0] == '0') return "0";

    return answer;
}

int main() {
    vector<int> numbers = { 3, 30, 34, 5, 9 };

    cout << solution(numbers);

	return 0;
}