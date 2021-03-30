#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int answer = 0, index = 0;
    while (people.size() > index) {
        int back = people.back(); 
        people.pop_back();
        if (people[index] + back <= limit) { answer++; index++; }
        else answer++;
    }
    return answer;
}

int main() {
    cout << solution({ 70, 50, 80, 50 }, 100) << '\n';
    cout << solution({ 70, 80, 50 }, 100) << '\n';

	return 0;
}