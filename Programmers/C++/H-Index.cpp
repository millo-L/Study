#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> citations) {
    int len = citations.size();

    sort(citations.begin(), citations.end());

    for (int i = 0; i < len; i++) {
        if (citations[i] < len - i) continue;
        return len - i;
    }
    return 0;
}

int main() {
    cout << solution({ 3, 0, 6, 1, 5 });

    return 0;
}