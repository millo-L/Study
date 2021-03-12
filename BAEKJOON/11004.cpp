#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[5000000];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    k -= 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    nth_element(a, a + k, a + n);
    cout << a[k];
    return 0;
}