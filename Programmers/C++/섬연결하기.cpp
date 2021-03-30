#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> node;

bool cmp(vector<int> u, vector<int> v) {
    return u[2] < v[2];
}

int getParent(int x) {
    if (node[x] == x) return x;
    return node[x] = getParent(node[x]);
}

bool find(int u, int v) {
    u = getParent(u);
    v = getParent(v);
    if (u == v) return true;
    return false;
}

void unionParent(int u, int v) {
    u = getParent(u);
    v = getParent(v);
    if (u < v) node[v] = u;
    else node[u] = v;
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;

    sort(costs.begin(), costs.end(), cmp);

    for (int i = 0; i < n; i++) {
        node.push_back(i);
    }

    int len = costs.size();
    for (int i = 0; i < len; i++) {
        int u = costs[i][0], v = costs[i][1], weight = costs[i][2];
        if (!find(u, v)) {
            answer += weight;
            unionParent(u, v);
        }
    }

    return answer;
}

int main() {
    cout << solution(4, { {0, 1, 1}, {0, 2, 2}, {1, 2, 5}, {1, 3, 1}, {2, 3, 8} });

	return 0;
}