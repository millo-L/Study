#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());

    int len = phone_book.size();

    for (int i = 0; i < len - 1; i++) {
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size())) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<string> phone_book1 = { "119", "97674223", "1195524421" };
    vector<string> phone_book2 = { "123","456","789" };

    cout << solution(phone_book1) << '\n';
    cout << solution(phone_book2);

	return 0;
}