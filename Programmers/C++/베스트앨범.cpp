#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmpGenre(pair<int, int> u, pair<int, int> v) {
    return u.second > v.second;
}

bool cmpPlay(vector<pair<int, int>> u, vector<pair<int, int>> v) {
    int uplays = 0;
    int vplays = 0;
    int len = u.size();
    for (int i = 0; i < len; i++) {
        uplays += u[i].second;
    }
    len = v.size();
    for (int i = 0; i < len; i++) {
        vplays += v[i].second;
    }

    return uplays > vplays;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, vector<pair<int, int>>> hash_map;
    vector<vector<pair<int, int>>> vec;
    int len = genres.size();
    for (int i = 0; i < len; i++) {
        hash_map[genres[i]].push_back(make_pair(i, plays[i]));
    }

    for (auto it = hash_map.begin(); it != hash_map.end(); it++) {
        vec.push_back(it->second);
    }

    len = vec.size();
    for (int i = 0; i < len; i++) {
        sort(vec[i].begin(), vec[i].end(), cmpGenre);
    }

    sort(vec.begin(), vec.end(), cmpPlay);

    for (int i = 0; i < len; i++) {
        answer.push_back(vec[i][0].first);
        if (vec[i].size() >= 2) answer.push_back(vec[i][1].first);
    }

    return answer;
}

int main() {
    vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
    vector<int> plays = { 500, 600, 150, 800, 2500 };
    vector<int> results = solution(genres, plays);
    int len = results.size();
    for (int i = 0; i < len; i++) {
        cout << results[i] << '\n';
    }

	return 0;
}