#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> ar, vector<vector<int>> commands) {
    vector<int> answer;
    int len = commands.size();
    for (int i = 0; i < len; i++) {
        vector<int> arr;

        for (int j = commands[i][0] - 1; j <= commands[i][1] - 1; j++) {
            arr.push_back(ar[j]);
        }

        sort(arr.begin(), arr.end());

        answer.push_back(arr[commands[i][2] - 1]);
    }

    return answer;
}

int main() {
    vector<int> arr = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> commands = { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} };
    vector<int> results = solution(arr, commands);
    int len = results.size();

    for (int i = 0; i < len; i++) {
        printf("%d ", results[i]);
    }

	return 0;
}