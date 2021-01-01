#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, d;
	string s1, s2;

	cin >> a >> b >> c >> d;

	s1 = to_string(a) + to_string(b);
	s2 = to_string(c) + to_string(d);

	long long l1 = stoll(s1);
	long long l2 = stoll(s2);

	cout << l1 + l2;
	
	return 0;
}