#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[500001] = { 0 };

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i; // original
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        // original - changed
        if (ans < a[i].second - i) {
            ans = a[i].second - i;
        }
    }
    cout << ans + 1;
    return 0;
}