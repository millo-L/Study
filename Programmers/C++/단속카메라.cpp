#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> routes) {
    sort(routes.begin(), routes.end());
    int len = routes.size();
    int end = routes[0][1];
    int cnt = 1;
    for (int i = 1; i < len; i++) {
        if (routes[i][1] < end) {
            end = routes[i][1];
        }
        if (routes[i][0] > end) {
            end = routes[i][1];
            cnt++;
        }
    }

    return cnt;
}

int main() {
    cout << solution({ {-20, 15}, {-14, -5}, {-18, -13}, {-5, -3} });

    return 0;
}