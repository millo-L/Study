#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	unordered_map<string, int> hash_map;
	int len = clothes.size();

	for (int i = 0; i < len; i++) {
		hash_map[clothes[i][1]]++;
	}

	for (auto it = hash_map.begin(); it != hash_map.end(); it++) {
		answer *= it->second + 1;
	}
	
	return answer - 1;
}

int main() {
	vector<vector<string>> clothes = { {"yellohat", "headgear"}, {"bluesunglasses", "eyewear"}, {"green_turban", "headgear"} };

	cout << solution(clothes);

	return 0;
}