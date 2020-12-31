#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	char str[101];

	while (scanf("%10s", str) == 1) {
		printf("%s\n", str);
	}

	return 0;
}