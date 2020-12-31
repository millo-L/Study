#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char date[7][4] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int month, day;
	int sum_days = 0;

	cin >> month >> day;

	for (int i = 1; i < month; i++) {
		sum_days += days[i];
	}

	sum_days += day - 1;

	printf("%s\n", date[sum_days % 7]);

	return 0;
}