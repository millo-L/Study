#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	char str[101];

	while (scanf("%[^\n]\n", str) == 1) {
		printf("%s\n", str);
	}

	return 0;
}