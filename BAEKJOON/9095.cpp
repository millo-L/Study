#include <iostream>
using namespace std;

int main() {
	int n, num, d[11] = { 0 };
	
	cin >> n;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	
	while (n > 0) {
		cin >> num;

		for (int i = 4; i <= num; i++) {
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}

		cout << d[num] << "\n";
		n--;
	}

	return 0;
}