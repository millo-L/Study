#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a;
    for (int i = 0; i < n; i++) a.push_back(i);
    sort(a.begin(), a.end(), [&s](int u, int v) {
        return strcmp(s.c_str() + u, s.c_str() + v) < 0;
        });
    for (auto& x : a) {
        cout << s.substr(x) << '\n';
    }
    return 0;
}

/*

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    string str;
    cin >> str;

    vector<string> suffix;
    int len = str.length();
    for (int i = 0; i < str.size(); i++) {
        suffix.push_back(str.substr(i));
    }

    sort(suffix.begin(), suffix.end());

    for (string s : suffix) {
        cout << s << "\n";
    }
    return 0;
}
*/