#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<int> num;
    vector<int> temp;
    int len = numbers.size();

    for (int i = 0; i < len; i++) {
        num.push_back(numbers[i] - '0');
    }

    sort(num.begin(), num.end());
    do {

        for (int i = 0; i <= len; i++) {
            int tmp = 0;
            for (int j = 0; j < i; j++) {
                tmp = tmp * 10 + num[j];
                temp.push_back(tmp);
            }
        }
    } while (next_permutation(num.begin(), num.end()));

    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    len = temp.size();

    for (int i = 0; i < len; i++) {
        if (isPrime(temp[i])) answer++;
    }

    return answer;
}

int main() {
    cout << solution("17") << '\n';
    cout << solution("011") << '\n';

	return 0;
}